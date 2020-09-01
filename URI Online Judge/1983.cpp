#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int reg[105],i,k;
    float marks[105],maxs=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>reg[i]>>marks[i];
        if(maxs<marks[i])
        {
            maxs=marks[i];
            k=i;
        }
    }
    if(marks[k]>=8.0)
            cout<<reg[k]<<endl;
    else
            cout<<"Minimum note not reached"<<endl;

}
