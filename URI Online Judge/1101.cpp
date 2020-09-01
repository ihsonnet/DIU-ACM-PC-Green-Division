#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,i,j,n;
    cin>>a>>b;
    while(a>0 && b>0)
    {
        if(a>b)
            {
                i=b;
                n=a;
            }
        else if(b>a)
            {
                i=a;
                n=b;
            }
        for(;i<=n;i++)
        {
            cout<<i<<" ";
            sum=sum+i;
        }
        cout<<"Sum="<<sum<<endl;
        sum=0;
        cin>>a>>b;
    }
}
