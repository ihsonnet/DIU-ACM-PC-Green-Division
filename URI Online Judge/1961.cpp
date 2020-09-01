#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,pilar[100],c=0,i,dif;
    cin>>p>>n;
    for(i=0;i<n;i++)
    {
        cin>>pilar[i];
    }
     for(i=0;i<n-1;i++)
    {
        if(pilar[i]>pilar[i+1])
            dif=pilar[i]-pilar[i+1];
        else
            dif=pilar[i+1]-pilar[i];
        if(dif<=p)
            c++;
    }
    if(c==n-1)
        cout<<"YOU WIN"<<endl;
    else
        cout<<"GAME OVER"<<endl;
}
