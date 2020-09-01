#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,arr[105][105];
    cin>>n;
    while(n)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j>i)
                    arr[i][j]=j-i+1;
                if(i==j)
                    arr[i][j]=1;
                if(i>j)
                    arr[i][j]=i-j+1;

                printf("%3d",arr[i][j]);
                if(j<n)
                    cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>n;
    }
}
