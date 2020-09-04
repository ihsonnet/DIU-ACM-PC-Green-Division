#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,d,i=0,rem;
    while(cin>>m>>d)
    {
        if(m==1)
        {
            rem=360-d;
        }
        if(m==2)
        {
            rem=329-d;
        }
        if(m==3)
        {
            rem=300-d;
        }
        if(m==4)
        {
            rem=269-d;
        }
        if(m==5)
        {
            rem=239-d;
        }
        if(m==6)
        {
            rem=208-d;
        }
        if(m==7)
        {
            rem=178-d;
        }
        if(m==8)
        {
            rem=147-d;
        }
        if(m==9)
        {
            rem=116-d;
        }
        if(m==10)
        {
            rem=86-d;
        }
        if(m==11)
        {
            rem=55-d;
        }
        if(m==12)
        {
            rem=25-d;
        }

        if(rem==0)
        cout<<"E natal!"<<endl;
        if(rem==1)
        cout<<"E vespera de natal!"<<endl;
        if(rem>1)
        cout<<"Faltam "<<rem<<" dias para o natal!"<<endl;
        if(rem<0)
        cout<<"Ja passou!"<<endl;
    }
}
