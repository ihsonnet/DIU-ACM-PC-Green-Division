#include<iostream>
using namespace std;
int main()
{
    int h,m,h1,m1;
    while(!cin.eof())
    {
        cin>>h;
        cin>>m;
        h1=h/30;
        m1=m/6;
        if(h1<10 && m1<10)
        {
            cout<<"0"<<h1<<":"<<"0"<<m1<<endl;
        }
        else if(h1<10)
        {
            cout<<"0"<<h1<<":"<<m1<<endl;
        }
        else if(m1<10)
        {
            cout<<h1<<":"<<"0"<<m1<<endl;
        }
        else
        {
           cout<<h1<<":"<<m1<<endl;
        }
    }
}
