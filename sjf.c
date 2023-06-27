#include<stdio.h>
int main(){
    int i =0,p[10],n,bt[10],wt[10],total=0,totalT=0,temp=0,j,tt[10];
    float avg_wt,avg_tat;
    printf("\nEnter the no of process:");
    scanf("%d",&n);
    printf("\nEnter the burst time:");
    for(i=0;i<n;i++){
        printf("\np%d:",i);
        scanf("%d",&bt[i]);
        
    }
     for(i=0;i<n-1;i++){
         for(j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
         }
     }
     wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=bt[i-1]+wt[i-1];
        total+=wt[i]; 
    }
    avg_wt=(float)total/n;
    printf("\nProcess\t Burst Time \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++){
        tt[i]=bt[i]+wt[i];
        totalT+=tt[i];
        printf("\np%d\t\t %d\t\t%d\t\t%d",i,bt[i],wt[i],tt[i]);
    }
    avg_tat=(float)totalT/n;
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f",avg_tat);
}