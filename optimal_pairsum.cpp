#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{   int target = 8;
    vector<int>vec = {10,2,4,4,5,9,7};
    int n = vec.size();
  sort(vec.begin(), vec.end()); 
  int i = 0;
  int j = n-1;
  while(i<j)
  {
      if(vec[i]+vec[j]<target)
      {
          i++;
      }
      else if(vec[i]+vec[j]>target)
      {
          j--;
      }
      else
      {
          cout<<vec[i] << " and "<<vec[j]<<" are two numbers whos addition is  8 "<<endl;

          i++;
          j--;
          
      }
  }
   
    return 0;
}
