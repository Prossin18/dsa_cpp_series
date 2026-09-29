// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
void halfMountain(int row, int col , int cont1,int cont2)
{
    if(row == 0)
    {
        return ;
    }
    cout<< "+";
    col++;
    if(col == cont1)
    {
        
        if(row<= cont2/2)
        {
            cont1 -=1;
        }
        else
        {
            cont1 +=1;
        }
        col = 0;
        row--;
        cout<<endl;
    }
    if(row == cont2/2)
    {
        cont1 =cont2/2;
    }
    
    halfMountain(row,col,cont1,cont2);
    
}


int main() {
    // Write C++ code here
    
    halfMountain(7,0,1,7);
    return 0;
}