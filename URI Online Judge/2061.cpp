#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tab,Case,i;
    string ch;
    cin>>tab>>Case;
    for(i=0;i<Case;i++)
    {
        cin>>ch;
        if(ch[0] == 'f')
        {
            tab=tab-1;
            tab=tab+2;
        }
        else if(ch[0] == 'c')
        {
            tab=tab-1;
        }
    }
    cout<<tab<<endl;
}
