#include<bits/stdc++.h>
using namespace std;
#define maxm 30
int main()
{
    int i,j,n,t,pos,bt[maxm],process[maxm],pr[maxm],wt[maxm],tat[maxm];
    float awt=0.000,atat=0.000;

    cout<<"enter  numbers of process :";
    cin>>n;
    cout<<"enter process numbers :";
    for(i=0; i<n; i++) cin>>process[i];
    cout<<"enter burst time :";
    for(i=0; i<n; i++) cin>>bt[i];
    cout<<"enter prority numbers";
    for(i=0; i<n; i++)
    {
        cin>>pr[i];

    }
    //sort acording to priority
    for(i=0; i<n; i++)
    {
        pos=i;
        for(j=i+1; j<n; j++)
        {
            if(pr[j]<pr[pos]) pos=j;
        }
        t=pr[i];
        pr[i]=pr[pos];
        pr[pos]=t;
        t=bt[i];
        bt[i]=bt[pos];
        bt[pos]=t;



    }
    //wt tat
    printf("process\t burst\t prio\t waiting\t turn\n ");
    for(i=0;i<n;i++){
        wt[i]=0;
        tat[i]=0;

        for(j=0;j<i;j++){
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=wt[i]+awt;
        atat=atat+tat[i];
        printf("%d\t%d\t%d\t%d\t%d\n",process[i],bt[i],pr[i],wt[i],tat[i]);

    }
    awt=awt/n;
    cout<<awt<<endl;
    atat=atat/n;
    cout<<atat<<endl;

}
