#include<bits/stdc++.h>
using namespace std;
int main()
{
    long Pa,Pb,PaG1,PbG2;
    double G1,G2;
    int t,c;
    cin>>t;
    while(t>0)
    {
        cin>>Pa>>Pb;
        cin>>G1>>G2;
        PaG1=Pa;
        PbG2=Pb;
        for(c=1;c<=101;c++)
        {
            PaG1=PaG1+(int)((PaG1*G1)/100);
            PbG2=PbG2+(int)((PbG2*G2)/100);
            if(PaG1>PbG2 && c<=100)
            {
                cout<<c<<" anos."<<endl;
                break;
            }
            else if(c>100)
            {
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        t--;
    }
}
