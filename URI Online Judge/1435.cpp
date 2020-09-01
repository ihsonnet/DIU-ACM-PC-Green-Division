#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,n;
    cin>>n;
    while(n)
    {
        for(i=1;i<=n;i++)
        {
           for(j=1;j<=n;j++)
           {
               if(i<j)
               {
                   x=i;
                   if((n-i+1)<x)
                    x=(n-i+1);
                   if ((n-j+1)<x)
                    x=(n-j+1);
               }
               else
               {
                   x=j;
                   if((n-i+1)<x)
                    x=(n-i+1);
                   if ((n-j+1)<x)
                    x=(n-j+1);
               }
               printf("%3d",x);
               if(j!=n)
                cout<<" ";
           }
           cout<<endl;
        }
        cout<<endl;
        cin>>n;
    }
}
