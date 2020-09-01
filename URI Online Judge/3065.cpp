#include<iostream>
using namespace std;
int main()
{
    int m,i,n,c=0;
    char ch;
    cin>>m;
    while(m)
    {
        c++;
        int sum=0;
        for(i=0;i<m;i++)
        {
            if(i==0)
            {
                cin>>n;
                sum=sum+n;
            }
            else
            {
                cin>>ch>>n;
                if(ch=='+')
                    sum=sum+n;
                else if(ch=='-')
                    sum=sum-n;
            }
        }
        cout<<"Teste "<<c<<endl;
        cout<<sum<<endl;
        cout<<endl;
        cin>>m;
    }
}
