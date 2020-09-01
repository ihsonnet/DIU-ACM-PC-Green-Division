#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,t,t2,i,j;
   cin>>n;
   while(n)
   {
       t=1;
       for(i=1;i<=n;i++)
       {
           t2=t;
           for(j=1;j<=n;j++)
           {
               if(n==1 || n==2)
               {
                printf("%d",t2);
               }
               if(n==3 || n==4)
               {
                printf("%2d",t2);
               }
               if(n==5)
               {
                printf("%3d",t2);
               }
               if(n==6 || n==7)
               {
                printf("%4d",t2);
               }
               if(n==8 || n==9)
               {
                printf("%5d",t2);
               }
               if(n==10)
               {
                printf("%6d",t2);
               }
               if(n==11 || n==12)
               {
                printf("%7d",t2);
               }
               if(n==13 || n==14)
               {
                printf("%8d",t2);
               }
               if(n==15)
               {
                printf("%9d",t2);
               }

               t2=t2*2;
               if(j<n)
                cout<<" ";
           }
           t=t*2;
           cout<<endl;
       }
       cout<<endl;
       cin>>n;
   }
}
