#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.size();
    int i=0,c=0;
    while(i<len)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i=i+3;
            if(c!=0)
                cout<<" ";
        }
        else
        {
            cout<<str[i];
            i++;
            c++;
        }
    }
    cout<<endl;

}

