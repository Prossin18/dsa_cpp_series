// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
void pattern1(int n)
{
    for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j<= i ; j++)
            {
                cout<< "*";
            }
            cout<<endl;
        
        
        }
}

int main() {
    pattern1(5);
    return 0;
    // Write C++ code here


    return 0;
}