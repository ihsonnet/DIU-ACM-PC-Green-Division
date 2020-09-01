#include<bits/stdc++.h>
using namespace std;
int main()
{
    char w1[15],w2[15],w3[15];
    cin>>w1;
    cin>>w2;
    cin>>w3;
    if(w1[0]=='v')
    {
      if(w2[0]=='a')
      {
        if(w3[0]=='c')
        {
          cout<<"aguia"<<endl;
        }
        else if(w3[0]=='o')
        {
          cout<<"pomba"<<endl;
        }
      }
      else if(w2[0]=='m')
      {
        if(w3[0]=='o')
        {
          cout<<"homem"<<endl;
        }
        else if(w3[0]=='h')
        {
          cout<<"vaca"<<endl;
        }
      }

    }
    else if(w1[0]=='i')
    {
      if(w2[0]=='i')
      {
        if(w3[2]=='m')
        {
          cout<<"pulga"<<endl;
        }
        else if(w3[2]=='r')
        {
          cout<<"lagarta"<<endl;
        }
      }
      else if(w2[0]=='a')
      {
        if(w3[0]=='h')
        {
          cout<<"sanguessuga"<<endl;
        }
        else if(w3[0]=='o')
        {
          cout<<"minhoca"<<endl;
        }
      }

    }
    return 0;
}
