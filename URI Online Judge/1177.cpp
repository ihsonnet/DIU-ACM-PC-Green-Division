#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p=0;
    cin>>n;
    while(p<1000)
    {
        for(j=0;j<n && p<1000;j++,p++)
        {
            cout<<"N["<<p<<"] = "<<j<<endl;
        }
    }
}
