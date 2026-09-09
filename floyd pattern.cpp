// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
int n ;
cout<<"enter the number of rows"<<endl;
cin>>n;
int count = 0;
for(int i  = 0;i <n;i++)
{
    for (int j = 0;j<=i;j++)
    {
        count = count+1;
        cout<<count ;
    }
    cout<<endl;
}


    return 0;
}
