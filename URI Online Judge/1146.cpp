#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    while(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            cout<<i;
            if(i!=n)
                cout<<" ";
        }
        cout<<endl;
        cin>>n;
    }
}
