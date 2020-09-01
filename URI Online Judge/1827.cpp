#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int main()
{
    int n,i,j;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<n/3 || n-1-i<n/3)
                {
                    if(j==i)
                        arr[i][i]=2;
                    else if(j==(n-1-i))
                        arr[i][j]=3;
                    else
                        arr[i][j]=0;
                }
                else if(i<n/2 || (n-1-i)>=n/3)
                {
                    if(j>=n/3 && (n-1-j)>=n/3)
                        arr[i][j]=1;
                    else
                        arr[i][j]=0;

                    if(n%2!=0 && j==n/2)
                        arr[j][j]=4;
                }
                else
                    arr[i][j]=0;

                cout<<arr[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
