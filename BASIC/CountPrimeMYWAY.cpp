// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
#include<vector>
int count_primes(int n )
{
    vector<int> nums(n+1,true);
    nums[0] = false;
    nums[1] = false;
    for(int i = 2;i*i<n; i++)
        {
            for(int j = i ; j*i <= n ; j++)
                {
                    nums[i*j]= false; 
                }
           
        }
    int count =0;
    for(int i = 0 ; i <= 13 ;i++)
        {
            if(nums[i] ==true)
            {
               count++; 
            }
        }
    return count;
}

int main() {
    // Write C++ code here
    cout<<count_primes(50);
    return 0;
}