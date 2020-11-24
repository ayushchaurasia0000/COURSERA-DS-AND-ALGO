#include<bits/stdc++.h>

using namespace std;

    int get_index(std::vector<int> value , std::vector<int> weight)
    {
        double max=0;
        int max_i=0;
        for(int i=0;i<weight.size();i++)
        {
            if(weight[i] != 0 && (double)value[i] / weight[i] > max)
            {
                max =(double)value[i] / weight[i];
                max_i = i;
            }
        }
        return max_i;
    }

    double fun(int total, std::vector<int>value, std::vector<int>weight)
    {
        double capacity=0.0;
        int a;
        for(int i=0 ; i<weight.size();i++)
        {
            if(total ==0)
            return capacity;

            int index=get_index(value,weight);

             a=std::min(total, weight[index]);
            capacity +=a*(double)value[index] / weight[index];
            weight[index] -=a;
            total -=a;
        }
        return capacity;
    }

int main()
{
    int n,total;
    std::cin>>n>>total;
    std::vector<int>value(n);
    std::vector<int>weight(n);

    for(int i=0;i < n;i++)
    std::cin>>value[i] >> weight[i];

    double answer=fun(total,value,weight);
    std::cout.precision(10);
    std::cout <<answer<<endl;
}