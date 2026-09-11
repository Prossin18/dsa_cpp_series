// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int maxColSum(vector<vector<int>> mat )
{
    int row = mat.size();
    int col = mat[0].size();
    int i = 0;
    int j = 0; 
    int sum = 0 ;
    int maxsum = 0;
    
    while(j<col)
        {
            sum += mat[i][j];
            i++;
            if(i == row)
            {
                maxsum = max(maxsum,sum);
                i =0;
                j++;
                sum = 0;
            }
            
            
            
        }
   
        return maxsum;
}


int main() {
    // Write C++ code here
    vector<vector<int>>matrix = {{2,3,4},{8,9,1},{12,5,6}};
   int ans = maxColSum(matrix);
    cout<<ans;
    

    
    return 0;
}