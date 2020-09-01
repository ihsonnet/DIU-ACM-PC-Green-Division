#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,level;
    while(!cin.eof())
    {
        cin>>t;
        level=1;
        for(i=0;i<t;i++)
        {
            cin>>n;
            if(n>=20)
            {
                level=3;
                break;
            }
            else if(n>=10)
                level=2;
        }
        if(level==1)
            cout<<"1"<<endl;
        else if(level==2)
            cout<<"2"<<endl;
        else if(level==3)
            cout<<"3"<<endl;
    }
}
