#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,reg[6],valu[6];
    double k,cost=0.0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>reg[i]>>valu[i];
        if(reg[i]==1001)
            k=1.50;
        if(reg[i]==1002)
            k=2.50;
        if(reg[i]==1003)
            k=3.50;
        if(reg[i]==1004)
            k=4.50;
        if(reg[i]==1005)
            k=5.50;

        cost=cost+(double)(valu[i]*k);
    }
    printf("%.2lf\n",cost);
}
