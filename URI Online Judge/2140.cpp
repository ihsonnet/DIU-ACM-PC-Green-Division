#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(1)
    {
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        else
        {
            if(m-n==2 || m-n==5 || m-n==10 || m-n==20 || m-n==50 || m-n==100 || m==2 || m==5 || m==10 || m==20 || m==50 || m==100)
                cout<<"impossible"<<endl;
            else
                cout<<"possible"<<endl;
        }
    }
}
