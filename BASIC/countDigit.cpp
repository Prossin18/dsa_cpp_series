#include<iostream>
using namespace std;

int countDigit(int num)
{
    int count = 0;
    while(num != 0)
    {
        count++;
        num = num/10;
    }

    return count;
}
int main()
{   int n;
    cout<<"enter the number : ";
    cin>>n;

    cout << countDigit(n);
    return 0;
}
