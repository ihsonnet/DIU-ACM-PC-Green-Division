#include<bits/stdc++.h>
using namespace std;

long long int f91(int n)
{
    if(n==91)
        return 91;
    else if(n<=100)
        return f91(f91(n+11));
    else if(n>=101)
    {
        return n-10;
    }
}
int main()
{
    int n;
    long long int res;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            res = f91(n);
            cout<<"f91("<<n<<") = "<<res<<endl;
        }
    }
}
