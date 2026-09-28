// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
void pattern2(int n)
{
    for(int i = 0 ; i < n ; i ++)
        { 
            for(int j = 0 ; j < i+1 ; j++)
            {  
                if(i%2 == 0)
                {
                    if(j%2 == 0)
                    {
                        cout<< 1 ;
                    }
                    else
                    {
                        cout<< 0 ;
                    }
                    
                }
                if(i%2 != 0)
                {
                    if(j%2 == 0)
                    {
                        cout<< 0 ;
                    }
                    else
                    {
                        cout<< 1 ;
                    }
                    
                }
                
            }
            cout<<endl;
        }
          
        
        
}


int main() {
    pattern2(5);
    return 0;
    // Write C++ code here


    return 0;
}