#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,delay,ttime;
    char ch;
    while(!cin.eof())
    {
        cin>>h>>ch>>m;
        ttime=(h*60)+m+60;
        delay=ttime-480;
        if(delay>0)
            cout<<"Atraso maximo: "<<delay<<endl;
        else
            cout<<"Atraso maximo: 0"<<endl;
    }
}
