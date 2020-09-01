#include<bits/stdc++.h>
using namespace std;
int main()
{
    double N[100],n;
    int i;
    cin>>n;
    for(i=0;i<100;i++)
    {
        if(i==0)
        {
            N[i]=n;
            printf("N[%d] = %.4lf\n",i,N[i]);
        }
        else
        {
            N[i]=N[i-1]/2;
            printf("N[%d] = %.4lf\n",i,N[i]);
        }
    }

}
