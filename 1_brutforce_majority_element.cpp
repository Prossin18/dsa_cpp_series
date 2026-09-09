#include<iostream>
#include<vector>
using namespace std;
int  main()
{
    vector<int>vec = {1,2,2,1,1,1};
    int n = vec.size();
    int frequency = 0 ;
    

    for(int i = 0;i<n-1;i++)
    {
        for (int j = 0;j<n-1;j++)
        {
            if(vec[i] == vec[j])
            {
                frequency++;
            }
        }
        if(frequency >= (n/2))
        {
            
            cout<<vec[i]<<" is the majority element present in the array  "<<endl;
            
            return 0;
        }
    }
    return 0;
    
}
