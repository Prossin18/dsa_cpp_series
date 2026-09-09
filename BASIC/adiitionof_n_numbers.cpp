// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sum(int m)

{
    
    int count = 0;
    for (int i = 0;i<= m;i++)
    {
        count = count+i;
        
    }
    cout<<count;
}

int main() {
    cout<<"enter the number"<<endl;
int x;
cin>> x;
    sum(x);
    // Write C++ code here
    

    return 0;
}
