#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,f1,f2,f3;
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        f1=0;
        f2=1;
        cin>>n;
        for(c=0;c<=n;c++)
        {
           if(c==0)
            f3=0;
           else if(c==1)
            f3=1;
           else
           {
               f3=f1+f2;
               f1=f2;
               f2=f3;
           }
        }
        cout<<"Fib("<<n<<") = "<<f3<<endl;
    }
}
