#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d,a2,b2,c2,d2;
        long long int a1,b1,c1,d1;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%lld.%lld.%lld.%lld",&a1,&b1,&c1,&d1);

        a2= BinaryToDecimal(a1);
        b2= BinaryToDecimal(b1);
        c2= BinaryToDecimal(c1);
        d2= BinaryToDecimal(d1);

        if(a==a2 && b==b2 && c==c2 && d==d2)
            cout<<"Case "<<i+1<<": Yes"<<endl;
        else
            cout<<"Case "<<i+1<<": No"<<endl;

    }

}
