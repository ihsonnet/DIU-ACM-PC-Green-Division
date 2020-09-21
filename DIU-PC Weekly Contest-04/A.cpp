#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,f1,f2,flagstone;
    cin>>n>>m>>a;
    if(n%a==0)
        f1=n/a;
    else
        f1=(n/a)+1;
    if(m%a==0)
        f2=m/a;
    else
        f2=(m/a)+1;

    flagstone=f1*f2;
    cout<<flagstone<<endl;
}
