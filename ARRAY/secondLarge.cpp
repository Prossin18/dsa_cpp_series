#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        
        int n = arr.size();
        int maxEle = -1;
        int secLarg = -1;

        for(int i = 0; i < n; i++) {

            if(arr[i] > maxEle) {
                secLarg = maxEle;
                maxEle = arr[i];
            }
            else {
                if(arr[i] > secLarg && arr[i] != maxEle) {
                    secLarg = arr[i];
                }
            }
        }

        return secLarg;
    }
};

int main() {

    vector<int> arr = {10, 5, 8, 10, 3};

    Solution obj;

    int answer = obj.getSecondLargest(arr);

    cout << "Second Largest = " << answer << endl;

    return 0;
}