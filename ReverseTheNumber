// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
#include<climits>
int reverse(int num)
{
    int digit;
    int rev = 0 ;
    while( num != 0)
    {
        digit = num % 10 ;
        if((rev > INT_MAX/10) ||(rev == INT_MAX/10 && digit > 8))
        {
            return 0;
        }
        if((rev < INT_MIN/10) || (rev == INT_MIN/10 && digit < -8))
        {
            return 0 ;
        }
        
        rev = (rev*10)+digit;
        num = num/10;
    }
   return rev ; 
}

int main() {
    // Write C++ code here
    cout<<reverse(254632);

    return 0;
}
