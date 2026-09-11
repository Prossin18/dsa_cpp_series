// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

pair<int , int> linearMatSearch(vector<vector<int>> mat,int n )
{
    int row = mat.size();
    for(int i = 0 ; i < row;i++)
        for(int j = 0 ;j<mat[i].size();j++)
            {
                if(mat[i][j] == n)
                {
                    return {i,j};
                }
            }
        return {-1,-1};
}


int main() {
    // Write C++ code here
    vector<vector<int>>matrix = {{2,3,4},{8,9,1},{12,5,6}};
    cout<<"enter to find fromt the matrix : ";
    int n ;
    cin>>n;
    
    pair<int,int> ans = linearMatSearch(matrix,n);
    if( ans.first == -1)
    {
        cout<<"number you entered is not found in the matrix.";
    }
    else
    {
        cout<< "position of entred number is :"<< ans.first <<","<<ans.second;
    }
   
    
    return 0;
}