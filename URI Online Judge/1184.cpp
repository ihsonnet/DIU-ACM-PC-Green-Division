#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0;
    float sum=0.0,ar[12][12];
    char t;
    cin>>t;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>ar[i][j];
            if(j<i)
            {
                sum=sum+ar[i][j];
                c++;
            }
        }
    }
    if(t=='S')
    {
       printf("%.1f\n",sum);
    }
    else if(t=='M')
    {
       printf("%.1f\n",sum/c);
    }
    else
        cout<<"Enter Correct instruction"<<endl;
}

