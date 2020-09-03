#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res;
    vector <char> roman;
    cin>>n;
    res=n;
    while(res>0)
    {
        if(res>=900)
        {
            roman.push_back('C');
            roman.push_back('M');
            res=res-900;
        }
        else if(res>=500)
        {
            roman.push_back('D');
            res=res-500;
        }
        else if(res>=400)
        {
            roman.push_back('C');
            roman.push_back('D');
            res=res-400;
        }
        else if(res>=100)
        {
            roman.push_back('C');
            res=res-100;
        }
        else if(res>=90)
        {
            roman.push_back('X');
            roman.push_back('C');
            res=res-90;
        }
        else if(res>=50)
        {
            roman.push_back('L');
            res=res-50;
        }
        else if(res>=40)
        {
            roman.push_back('X');
            roman.push_back('L');
            res=res-40;
        }
        else if(res>=10)
        {
            roman.push_back('X');
            res=res-10;
        }
        else if(res>=9)
        {
            roman.push_back('I');
            roman.push_back('X');
            res=res-9;
        }
        else if(res>=5)
        {
            roman.push_back('V');
            res=res-5;
        }
        else if(res>=4)
        {
            roman.push_back('I');
            roman.push_back('V');
            res=res-4;
        }
        else if(res>=1)
        {
            roman.push_back('I');
            res=res-1;
        }
    }

    for(int i=0;i<roman.size();i++)
    {
        cout<<roman[i];
    }
    cout<<endl;
}
