// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
void glass(int n)
{
    for(int i = 0 ; i < n ; i++)
        {   int count = 0;
            for(int j = 0 ; j < (n*2-1-i) ;j++)
                {
                    if(j <= i )
                    {
                        count++;
                        cout<<count;
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            for(int k = 1+i; k>=1;k--)
                {
                    cout<<k;
                }
            cout<<endl;
        }
}

int main() {
    // Write C++ code here
    glass(3);

    return 0;
}