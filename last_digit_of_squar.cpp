#include<bits/stdc++.h>

using namespace std;

    int fun(unsigned long long int b[], long long int a)
    {
        b[0] = 0;
        b[1] = 1;
        int sum=b[0] + b[1];
        if(a >= 2)
        {
            for(long long int i=2 ; i<= a ;i++)
            {
                b[i] = ( b[i-2] % 10 + b[i-1] % 10 ) % 10;
                sum*= b[i];
            }
            return sum % 10;
        }
        else
        return a;
        
    }

int main()

{
    long long int a;
    std::cin>>a;
    unsigned long long int b[a];
    for(long long int i=0;i < a ;i++)
    b[i] = i;
    long long int c=fun(b , a);
    std::cout<<c;
    return 0;
}