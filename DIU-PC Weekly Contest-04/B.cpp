#include<bits/stdc++.h>
using namespace std;
string upper(string str,int len)
{
    for(int i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    return str;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int len = str1.size();
    str1 = upper(str1,len);
    str2 = upper(str2,len);
    if(str1>str2)
        cout<<"1";
    else if(str1<str2)
        cout<<"-1";
    else
        cout<<"0";
}
