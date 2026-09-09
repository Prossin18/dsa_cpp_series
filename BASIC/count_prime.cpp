#include<iostream>
using namespace std;
#include<vector>
int countPrime(int n )
{   int count = 0 ;
    vector<bool>check(n+1,true);
    for(int i = 2 ; i < n ; i++)
    {   if(check[i] == true)
        
        {
          count++;
          for(int j = i*2 ; j < n ; j = j+i)
          {
            check[j] = false;
          }
        }
    }
    return count;

}
int main()
{
    cout<<countPrime(23);
    return 0 ; 
}

   
