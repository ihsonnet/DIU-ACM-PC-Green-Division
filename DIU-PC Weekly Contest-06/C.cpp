#include<bits/stdc++.h>
using namespace std;

void swaap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int bubbleSort(int arr[], int n)
{
    int i, j,c=0;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swaap(&arr[j], &arr[j+1]);
                c++;
            }
        }
    }
    return c;
}

int isGood(int arr[],int n)
{
    int i,isGood=1;
    for(i=0;i<n;i++)
    {
        if(i%2 != arr[i]%2)
            isGood=0;
    }
    return isGood;
}

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,arr[40];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(isGood(arr,n))
        {
            cout<<"0"<<endl;
        }
        int c= bubbleSort(arr,n);
        if(isGood(arr,n))
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        t--;
    }
}
