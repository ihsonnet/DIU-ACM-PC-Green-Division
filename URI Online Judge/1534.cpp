#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==n-i-1)
                    cout<<2;
                else if(i==j)
                    cout<<1;
                else
                    cout<<3;
            }
            cout<<endl;
        }
    }
}
