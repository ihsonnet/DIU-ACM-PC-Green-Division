#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t[105],miin=25,i,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t[i];
        if(t[i]<miin)
        {
            miin=t[i];
            c=i;
        }

    }
    cout<<c+1<<endl;
}
