//triangle pattern
#include <iostream>
using namespace std;

int main() {
    cout<<enter the number of rows;
int n;
cin>>n;
for(int i = 1;i<n+1;i++){
    for(int j =1;j<=i;j++)
    {
        cout<<j;
        
    }
    cout<<endl;
}
return 0;
}
/*
1
12
123
1234
  */
