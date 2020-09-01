#include<bits/stdc++.h>
using namespace std;
int main()
{
    int par[5],impar[5],i,pnum=0,impnum=0,data,j;
    for(i=0;i<15;i++)
    {
        cin>>data;
        if(data%2==0)
        {
            par[pnum]=data;
            pnum++;
            if(pnum==5)
            {
                for(j=0;j<5;j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                }
                pnum=0;
            }
        }
        else
        {
            impar[impnum]=data;
            impnum++;
            if(impnum==5)
            {
                for(j=0;j<5;j++)
                {
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
                impnum=0;
            }
        }
    }
    if(impnum<5)
    {
        for(j=0;j<impnum;j++)
                {
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
    }
    if(pnum<5)
    {
        for(j=0;j<pnum;j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                }
    }
}
