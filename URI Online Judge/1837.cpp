#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q,r;
    cin>>a>>b;
    if(a<0 && b>0 && a%b!=0)
    {
        q=a/b -1;
        r = a-(q*b);
    }
    else if(a<0 && b<0 && a%b!=0)
    {
        q=a/b +1;
        r = a-(q*b);
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    cout<<q<<" "<<r<<endl;
}
