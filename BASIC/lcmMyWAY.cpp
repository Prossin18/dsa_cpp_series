// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int hcf(int a, int b)
{  
    
    int rem; 
    while(b%a != 0)
        {
            rem = b%a;
            b = a;
            a = rem;
        }
   
    return a;
}
int lcm(int a,int b)
{  if(a>b)
    {
      swap(a,b);  
    }
    return (a*b/hcf(a,b));
}

int main() {
    // Write C++ code here
     
    cout<<lcm(12,14);
    
    return 0;
}