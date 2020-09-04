#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year>=1987 && year<2013 )
        cout<<"2013"<<endl;
    else
    {
        while(1)
        {
            year=year+1;
            int a,b,c,d;
            a=year/1000;
            b=(year%1000)/100;
            c=((year%1000)%100)/10;
            d=((year%1000)%100)%10;

            if(a!=b && a!=c && a!=d && d!=c && d!=b && c!=b)
                break;
        }
        cout<<year<<endl;
    }
}
