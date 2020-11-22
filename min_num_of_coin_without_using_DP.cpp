#include<bits/stdc++.h>

using namespace std;

	int fun(int coins[],int a,  int b)
	{
		if(b==0)
		return 0;
		int res=INT_MAX;

		for(int i=0;i<a;i++)
		{
			if(coins[i] <= b)
			{
			int sub_res= 1+ fun(coins, a, b- coins[i]);
			if(sub_res < res)
			res=sub_res;
			}

		}		
		return res;
	}

int main()
{
	int coins[]={25,10,5,1};
	std::cout<<fun(coins , 4 , 30);
	return 0;
}