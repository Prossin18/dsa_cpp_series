// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
void divisor(int num)
{
   
    for( int i = 1 ; i*i <= num; i++)
        {
            if(num % i == 0)
            {
                cout<< i << " ";
               
                if(i*i != num)
                {
                  cout<< num/i << " ";  
                }
                
                
              
            }
        }
    
    
}

int main() {
    // Write C++ code here
    divisor(132);
    
    return 0;
}