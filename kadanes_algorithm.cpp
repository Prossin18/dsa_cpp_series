// Online C++ compiler to run C++ program online
//kadanes algorithm
#include <iostream>
#include<climits>
using namespace std;

int main() {
    // Write C++ code here
   
int arr[]={1,2,-3,4,5,-3,6,-7};
int size = sizeof(arr)/sizeof(arr[0]);
int maxsum = INT_MIN;
for(int start = 0;start<size;start++)
{
    int currsum = 0;
  for(int end = start;end<size;end++)
  {
      currsum  += arr[end];
      maxsum  = max(maxsum,currsum);
      if(currsum<0)
      {
          currsum = 0;
      }
      
  }
}
cout<<maxsum;
    return 0;
}
