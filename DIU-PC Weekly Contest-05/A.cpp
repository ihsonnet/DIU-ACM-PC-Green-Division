#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int digit,temp,n,i,c=0;
    cin>>n;
    while(n>0)
    {
        temp = n/10;
        digit = n-(temp*10);
        if(digit == 4 || digit == 7)
        {
            c++;
        }
        n=temp;
    }
    if(c==4 || c==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
