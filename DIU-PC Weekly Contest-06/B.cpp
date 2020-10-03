#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        t--;
        if(n>=0)
        {
            int num=n;
            for(int i=0;i<num;i++)
            {
                cin>>n;
                t--;
            }
            continue;
        }
        c++;
    }
}
