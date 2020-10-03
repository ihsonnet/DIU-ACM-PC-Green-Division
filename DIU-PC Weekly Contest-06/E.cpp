#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,c=0,cnt=0,result=0;
    char filename[100];
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>filename[i];
        if(filename[i]=='x')
        {
            c++;
        }
        else
        {
            if(c>=3)
            {
                result=result+(c-2);
            }
            c=0;
        }
    }
    if(c>=3)
    {
        result=result+(c-2);
    }
    cout<<result<<endl;
}
