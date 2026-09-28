// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
void pattern2(int n)
{
    for(int i = 0 ; i < n ; i ++)
        { 
            for(int j = 0 ; j < n ; j++)
            {   
                if(j<(n-i-1))
                {
                    cout<< " ";
                }
                else if(j >= (n-i-1))
                {
                    cout<< "*";
                }
            }
            
          for(int k  = 0 ; k < i ; k++)
              {
                  if(i == 0 )
                  {
                      break;
                  }
                  
                  
                cout<< "*";
                  
                  
              }
          cout<<endl;
        
        
        }
}

int main() {
    pattern2(3);
    return 0;
    // Write C++ code here


    return 0;
}