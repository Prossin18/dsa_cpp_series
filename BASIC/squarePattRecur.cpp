#include<iostream>
using namespace std;
void squarePattern(int row, int col,int c)
{
    if(row == 0)
    {return; }
    cout<< "+";
    col--;
    if(col == 0)
    {
        cout<<endl;
        col = c;
        row--;
    }
   
    squarePattern(row,col,c);

}
int main()
{
    int row = 4;
    squarePattern(row, row,row);
    return 0;
}