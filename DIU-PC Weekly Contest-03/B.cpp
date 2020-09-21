#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a>b && a<c || a<b && a>c)
        {
            cout<<"Case "<<i+1<<": "<<a<<endl;
        }
        if(a<b && b<c || a>b && b>c)
        {
            cout<<"Case "<<i+1<<": "<<b<<endl;
        }
        if(c>b && a>c || c<b && a<c)
        {
            cout<<"Case "<<i+1<<": "<<c<<endl;
        }
    }

}
