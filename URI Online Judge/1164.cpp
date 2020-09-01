#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   long i,n,sum;
   cin>>t;
   while(t>0)
   {
       sum=0;
       cin>>n;
       for(i=1;i<n;i++)
       {
           if(n%i==0)
           {
                sum=sum+i;
            }
       }
       if(sum==n)
       {
           printf("%d eh perfeito\n",n);
       }
       else
       {
           printf("%d nao eh perfeito\n",n);
       }
       t--;
   }
}

