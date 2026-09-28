// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
bool revnum(int num)
{ int rev  = 0; 
  int n = num;
    while(num != 0)
        {
            rev  = (rev*10)+(num%10);
            num = num/10;
            if (rev == num) {
                return true;
            }
        }
    return false;
}

int main() {
    // Write C++ code here
    bool ans = revnum(1001);
    if(ans == true)
    {
        cout<< "yes it is palindrom";
    }
    else
    {
        cout<< "no";
    }
    
    return 0;
}