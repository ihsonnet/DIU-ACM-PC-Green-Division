#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n=4,list[10];
    char status='N';
    for(i=0;i<4;i++)
    {
        cin>>list[i];
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(list[i]>list[i+1])
                swap(list[i],list[i+1]);
        }
        n--;
    }
    if(list[3]<list[1]+list[2] || list[2]<list[0]+list[1])
    {
        status='S';
    }
    cout<<status<<endl;

}
