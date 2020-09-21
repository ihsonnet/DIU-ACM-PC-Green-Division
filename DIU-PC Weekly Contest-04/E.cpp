#include <bits/stdc++.h>
using namespace std;

int VectorToInt(vector<int> v)
{
    reverse(v.begin(), v.end());
    int decimal = 1;
    int total = 0;
    for (auto& it : v)
    {
        total += it * decimal;
        decimal *= 10;
    }
    return total;
}

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        int c=0;
        vector<int>sequence;
        for(int j=1;j<=b;j++)
        {
            sequence.push_back(j);
            int num = VectorToInt(sequence);
                cout<<num;
            if(j>=a)
            {

                if(num%3==0)
                    c++;
            }
        }
        cout<<"Case "<<i+1<<": "<<c<<endl;
    }

}
