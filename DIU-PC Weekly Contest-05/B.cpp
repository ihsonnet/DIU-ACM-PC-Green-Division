#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int c=0,n,k,i;
    cin>>n>>k;
    long long int arr[n+100];
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            arr[c]=i;
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2 ==0)
        {
            arr[c]=i;
            c++;
        }
    }
    cout<<arr[k-1]<<endl;
}
