#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start_hr,start_min,end_hr,end_min,final_hr,final_min;
    cin>>start_hr;
    cin>>start_min;
    cin>>end_hr;
    cin>>end_min;
    if(start_hr==end_hr && start_min==end_min)
    {
        final_hr=24;
        final_min=0;
    }
    else if(end_hr<start_hr)
    {
        final_hr=(24+end_hr)-start_hr;
        if(end_min<start_min)
        {
            final_min=(60+end_min)-start_min;
            final_hr=final_hr-1;
        }
        else
        {
            final_min=end_min-start_min;
        }
    }
    else
    {
        final_hr=end_hr-start_hr;
        if(end_min<start_min)
        {
            final_min=(60+end_min)-start_min;
            final_hr=final_hr-1;
        }
        else
        {
            final_min=end_min-start_min;
        }
    }

    if(final_hr<0)
    {
        final_hr=24+final_hr;
    }
    cout<<"O JOGO DUROU "<<final_hr<<" HORA(S) E "<<final_min<<" MINUTO(S)"<<endl;
}
