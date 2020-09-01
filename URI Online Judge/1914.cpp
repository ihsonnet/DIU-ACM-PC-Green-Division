#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i,t,num1,num2,sum;
    string name1,name2,status,status1,status2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>name1>>status1;
        cin>>name2>>status2;
        cin>>num1>>num2;
        sum=num1+num2;
        if(sum%2==0)
            status = "PAR";
        else status = "IMPAR";

        if(status1==status) cout<<name1<<endl;
        else cout<<name2<<endl;

    }
}
