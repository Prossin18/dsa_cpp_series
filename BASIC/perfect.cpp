// Online C++ compiler (editor)
// Write and run C++ online using this editor.
#include<iostream>
using namespace std;
int perfectN(int n, int sum, int i)
{
    if( n< i*i)
    {
        return sum;
    }

    if(n % i == 0)
    {
        sum += i;

        if(n/i != n)
        {
            sum += n/i;
        }
    }

    return perfectN(n, sum, i+1);
}
int main()
{
    int ans = perfectN(16, 0, 1);
    if(ans == 16)
    {
        cout<< true;
        
    }
    else
    {
        cout<<false;
    }
    
}