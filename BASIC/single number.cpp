//single number 
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 1, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int singlenum = 0;

    for(int i = 0; i < size; i++)
    {
        singlenum = singlenum ^ arr[i];
    }

    cout << "The single number is: " << singlenum << endl;

    return 0;
}
