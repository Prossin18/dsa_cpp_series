// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int maxRowSum(vector<vector<int>>matrix, int n , int m )
{
    
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0 ;i <n ; i++)
        {   
            
                    sum1 += matrix[i][i];
                    sum2 +=matrix[i][n-1-i];
                
            
        }
    int sum = sum1+sum2;

    return sum;
    
}
int main() {
    // Write C++ code here
   vector< vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int maxsum =maxRowSum(matrix,3,3);
    cout<<maxsum;

    return 0;
}