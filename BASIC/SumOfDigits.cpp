// Online C++ compiler (editor)
// Write and run C++ online using this editor.
#include<iostream>
using namespace std;
int sumOfDigits(int n )
{
    if(n == 0)
    {
        return 0;
    }
    return n%10 + sumOfDigits(n/10);
    
}
int main()
{
    cout<<sumOfDigits(567);
    return 0;
}