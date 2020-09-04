#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,me,lift,time,len;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>me>>lift;
        int dis = abs(me-lift);
        if(lift<me)
            len= me + dis;
        else
            len=lift;

        time=(len*4)+9+10;

        cout<<"Case "<<i+1<<": "<<time<<endl;
    }
}
