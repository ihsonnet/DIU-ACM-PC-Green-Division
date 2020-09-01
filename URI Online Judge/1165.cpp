#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,returno;
    long num;
    cin>>t;
    while(t>0)
    {
         cin>>num;
         returno=1;
         for(int i=2;i<(int)sqrt(num)+1;i++)
        {
            if(num%i==0)
                returno=0;
        }

        if(returno==1)
        {
            cout<<num<<" eh primo"<<endl;
        }
        else
        {
            cout<<num<<" nao eh primo"<<endl;
        }

     t--;
    }
}
