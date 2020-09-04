#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,donate,total=0,i;
    string str;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>str;
        if(str == "donate")
        {
            cin>>donate;
            total=total+donate;
        }
        else if(str == "report")
            cout<<total<<endl;
    }
}

