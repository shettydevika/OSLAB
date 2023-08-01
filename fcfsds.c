#include<stdio.h>
#include<stdlib.h>

int main(){
    int RQ[100],i,n,TotalHeadMoment=0,initial;
    printf("Enter the number of requests\n");
    scanf("%d",&n);
    printf("Enter the requests sequence\n");
    for(i=0;i<n;i++)
        scanf("%d",&RQ[i]);
    printf("Enter the initial head position\n");
    scanf("%d",&initial);

    //logic for FCFS disk scheduling
    printf("Sequence of requst access:\n");
    for(i=0;i<n;i++){
        printf("%d",RQ[i]);
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }
}