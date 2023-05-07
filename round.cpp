#include<bits/stdc++.h>
using namespace std;
#define mx 30
int main()
{
    int i,j,n,t,p[mx],bt[mx],wt[mx],tat[mx];
    float awt,atat;
    cout<<"enter number of process";
    cin>>n;
    cout<<"enter process number";
    for(i=0; i<n; i++) cin>>p[i];
    cout<<"enter burst time";
    for(i=0; i<n; i++) cin>>bt[i];
    int tqn;
    cin>>tqn;
    int rem_bt[n];
    for(i=0; i<n; i++)
    {
        rem_bt[i]=bt[i];
    }
    t=0;
    while(1){


            done=true;
            for(i=0;i<n;i++)
            {
                if(rem_bt[i]>0)
                {

                      done=false;
                      if(rem_bt[i]>tqn)
                      {
                          t=t+tqn;
                          rem_bt[i]-=tqn;

                      }
                      else{
                        t=t+rem_bt[i];
                        rem_bt[i]=0;
                        wt[i]=t-bt[i];


                      }
                }
            }
            if(done==true){
                break;
            }
    }
    for(i=0;i,n;i++)
    {
        tat[i]=wt[i]+bt[i];

    }
}
