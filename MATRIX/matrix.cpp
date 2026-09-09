#include <iostream>
#include <vector>
using namespace std;

int maxRowSum(vector<vector<int>>matrix, int n , int m )
{
    int maxSum = 0;
    int sum;
    for(int i = 0 ;i <n ; i++)
        {   sum = 0;
            for(int j = 0; j<m ; j++)
                {
                    sum += matrix[i][j];
                }
            maxSum = max(sum,maxSum);
        }

    return maxSum;
    
}
int main() {
   vector< vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int maxsum =maxRowSum(matrix,3,3);
    cout<<maxsum;

    return 0;
}