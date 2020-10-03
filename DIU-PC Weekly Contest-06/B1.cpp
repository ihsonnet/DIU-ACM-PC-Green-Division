#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,police=0,c=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n>=0)
        {
            police = police + n;
        }
        else
        {
            if(police>=1)
                police--;
            else
                c++;
        }
    }
    cout<<c<<endl;
}
