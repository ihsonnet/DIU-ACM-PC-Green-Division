#include<bits/stdc++.h>
using namespace std;
int digit(int x)
{
    int a=x,b=0;
    while(a)
    {
        a=a/10;
        b++;
    }
    return b;
}
int main()
{
   int n,t,t2,c,i,j,ar[16][16],tab;
   cin>>n;
   while(n)
   {
       t=1;
       for(i=1;i<=n;i++)
       {
           t2=t;
           for(j=1;j<=n;j++)
           {
                ar[i][j]=t2;
                t2=t2*2;
           }
           t=t*2;
       }
       tab=digit(ar[n][n]);
       //cout<<tab<<endl;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               c=digit(ar[i][j]);
               //cout<<c<<endl;
               for(c;c<tab;c++)
                    cout<<" ";
               cout<<ar[i][j];
               if(j<n)
                cout<<" ";
           }
           cout<<endl;
       }
       cout<<endl;
       cin>>n;
   }
}
