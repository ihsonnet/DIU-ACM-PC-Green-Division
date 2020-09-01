#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,media;
    int x=1;
    while(x==1)
    {
        while(1)
        {
            cin>>a;
            if(a>=0.0 && a<=10.0)
                break;
            else
            cout<<"nota invalida"<<endl;
        }
        while(1)
        {
            cin>>b;
            if(b>=0.0 && b<=10.0)
                break;
            else
            cout<<"nota invalida"<<endl;
        }
        media = (a+b)/2;
        printf("media = %.2lf\n",media);
        while(1)
        {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>x;
            if(x==1 || x==2)
                break;
        }
    }
}
