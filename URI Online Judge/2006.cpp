#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[5],c=0;
    cin>>n;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i]==n)
            c++;
    }
    cout<<c<<endl;
}
