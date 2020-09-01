
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,j;
    float sum=0.00,ar[12][12];
    char t;
    cin>>l;
    cin>>t;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>ar[i][j];
        }
    }

    if(t=='S')
    {
       for(i=0;i<12;i++)
        {
            sum=sum+ar[i][l];
        }
        printf("%.1f\n",sum);
    }
    else if(t=='M')
    {
        for(i=0;i<12;i++)
        {
            sum=sum+ar[i][l];
        }
        printf("%.1f\n",sum/12.00);
    }
    else
        cout<<"Enter Correct instruction"<<endl;
}
