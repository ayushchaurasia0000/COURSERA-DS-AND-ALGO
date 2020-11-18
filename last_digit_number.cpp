#include<bits/stdc++.h>

using namespace std;

    int fun(unsigned long long int b[], long long int start , long long int end)
    {
        b[0] = 0;
        b[1] = 1;
        int sum=b[0] + b[1];
        if( end >= 2 && start >= 2)
        {
            for(long long int i= start  ; i <= end ;i++)
            {
                b[i] = ( b[i-2] % 10 + b[i-1] % 10 ) % 10;
                sum = sum + b[i];
            }
            return sum % 10;
        }
        else 
        return end;
        
    }

int main()

{
    long long int start,end;
    std::cin>>start>>end;
    unsigned long long int b[end];
    for(long long int i=0;i < end ; i++)
    b[i] = i;
    long long int c=fun(b ,start,end);
    std::cout<<c;
    return 0;
}