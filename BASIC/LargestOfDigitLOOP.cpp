// Online C++ compiler (editor)
// Write and run C++ online using this editor.
// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int LargestDigit(int n)
{ int lrg = 0;
   while(n != 0)
       {
           lrg = max(n%10,lrg);
           n = n/10;
       
       }
  return lrg;
    
}

int main() {
    // Write C++ code here

    cout<< LargestDigit(23);
    return 0;
}