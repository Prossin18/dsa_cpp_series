// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int countDigit(int n )
{   int count = 0;
    while(n != 0 )
        {
            count ++;
            n = n/10;
        }
  
   return count;
    
}
int pow(int n , int count)
{   int x =1;
    for(int i = 0 ; i < count ; i++)
        {
            x = x*n;
        }
    return x;
}
int armstrong_number(int n)
{  
    int armnum = 0;
    int count = countDigit(n);
    while(n!= 0 )
        {
            
            armnum += pow(n%10,count);
            n = n/10;
        }
   return armnum;
}

int main() {
    // Write C++ code here
    int n = 370;
    int ans = armstrong_number(n);
    if(n == ans)
    {
        cout<< "it is armstrong number";
    }
    else
    {
        cout<< "it is not";
    }
    return 0;
}