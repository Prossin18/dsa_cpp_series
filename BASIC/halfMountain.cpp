// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
void halfMountain(int row, int col , int cont)
{
    if(row == 0)
    {
        return ;
    }
    cout<< "+";
    col++;
    if(col == cont)
    {
        cont +=1;
        col = 0;
        row--;
        cout<<endl;
    }
    
    halfMountain(row,col,cont);
    
}


int main() {
    // Write C++ code here

    halfMountain(3,0,1);
    return 0;
}