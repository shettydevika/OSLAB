#include<stdio.h>
#include<stdlib.h>

int main()
{
    int RQ[100],i,n,TotalHeadMoment=0,initial,size,move;
    printf("Enter the number of requests\n");
    scanf("%d",&n);
    printf("Enter the requests sequence\n");
    for(i=0;i<n;i++)
      scanf("%d",&RQ[i]);
    printf("Enter the initial head position\n");
    scanf("%d",&initial);
    printf("Enter total disk size\n");
    scanf("%d",&size);
    printf("Enter the head moment direction for high 1 and for low 0\n");
    scanf("%d",&move);

    //logi for c-scan disk scheduling
    //logic for sort the request array

    for(i=0;i<n;i++){
        for(j=o;j<n-i;j++){
            if(RQ[j]>RQ[j+1]){
                int temp;
                temp=RQ[i];
                RQ[j]=RQ[j+1];
                RQ[j+1]=temp;
            }
        }
    }