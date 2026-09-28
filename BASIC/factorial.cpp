// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int factorial(int n )
{
    if(n == 0)
    {
        return 1;
    }
    return n *factorial(n-1);
}

int main() {
    // Write C++ code here

    cout<<factorial(3);
    return 0;
}