#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(1)
    {
        cin>>a;
        if(a==0)
            break;
        cin>>b>>c;
        d=(a*b)*100 / c;
        cout<<(int)sqrt(d)<<endl;

    }
}
