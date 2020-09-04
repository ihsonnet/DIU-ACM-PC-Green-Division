#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int n,int left, int right)
{
    int mid;
    if(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==n)
            return mid;
        if(arr[mid]<n)
            return bsearch(arr,n,mid+1,right);
        if(arr[mid]>n)
            return bsearch(arr,n,left,mid-1);
    }
    else
        return -1;
}

int main()
{
    int arr[100],key[100];
    int n,right,result,nkey,c;
    cin>>right;
    cin>>nkey;
    for(c=1;c<65;c++)
    {
        for(int i=0;i<right;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+right);
        for(int i=0;i<nkey;i++)
        {
            cin>>key[i];
        }
        cout<<"CASE# "<<c<<":"<<endl;
        for(int i=0;i<nkey;i++)
        {
           result=bsearch(arr,key[i],0,right-1);
            if(result>=0)
                cout<<key[i]<<" found at "<<result+1<<endl;
            else
                cout<<key[i]<<" not found"<<endl;
        }
        cin>>right;
        cin>>nkey;
        if(right==0 && nkey==0)
            break;
    }
}
