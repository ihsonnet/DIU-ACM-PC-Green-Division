#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n<2015)
            cout<<2015-n<<" D.C."<<endl;
        else
            cout<<n-2014<<" A.C."<<endl;
    }
}
