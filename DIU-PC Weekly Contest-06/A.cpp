#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int len;
    string word;
    while(t)
    {
        cin>>word;
        len = word.length();
        if(len==5)
        {
            cout<<"3"<<endl;
        }
        else if(len==3)
        {
            if(word[0]=='t' && word[1]=='w' || word[2]=='o' && word[0]=='t' || word[1]=='w' && word[2]=='o')
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
        t--;
    }
}
