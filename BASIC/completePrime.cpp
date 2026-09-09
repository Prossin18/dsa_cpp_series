#include<iostream>
using namespace std;
#include<string>

class  completePrime
{
    public:
    bool completePrime(int num)
    {
        string s = to_string(num);
        //prefix
        int len = s.length();

        for(int i = 0 ; i <len ; i ++)
        {
            int n = stoi(s.substr(0,i+1));
            if(!isprime(n))
            {
                return false;
            }
        }

        //suffix
         for(int j = 0 ; j <len ; j ++)
        {
            int n = stoi(s.substr(len-(j+1)));
            if(!isprime(n))
            {
                return false;
            }
        }
        return true;
    }

    bool isprime(int num)
    {
        
        for(int i = 2 ; i*i<=num ; i++)
        {
            if(num % i == 0)
            {
                return false;
            }
        }
        return true;
    }

};

int main()
{
    
    return 0;
}