#include <bits/stdc++.h>
using namespace std;
int main()
{
    int emply_bottle,free_drinks;
    for(int i=0;i<10;i++)
    {
        cin>>emply_bottle;
        if(emply_bottle==0)break;
        free_drinks = emply_bottle/2;
        cout<<free_drinks<<endl;
    }
}
