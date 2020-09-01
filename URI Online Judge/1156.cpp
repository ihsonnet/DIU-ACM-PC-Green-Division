#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float q=1,sum=0.00,pp;
    for(i=1;i<40;i++)
    {
        if(i%2!=0)
        {
            pp=i/q;
            sum=sum+pp;
            q=q*2;
        }
    }
    printf("%.2lf\n",sum);
}

