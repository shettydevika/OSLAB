#include<stdio.h>
#include<stdlib.h>

int main(){
    int RQ[100],j,i,n,TotalHeadMoment=0,initial;
    printf("Enter the number of requests\n");
    scanf("%d",&n);
    printf("Enter the requests sequence\n");
    for(i=0;i<n;i++)
      scanf("%d ",&RQ[i]);
    printf("Enter the initial head position\n");
    scanf("%d",&initial);

    //logic for FCFS disk scheduling
    printf("Sequence of requst access:\n");
    for(i=0;i<n;i++){
        printf("%d ",RQ[i]);
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }
    printf("\n Total Head Moment is %d",TotalHeadMoment);
    return 0;
}

/*Enter the number of requests
7
Enter the requests sequence
82
170
43
140
24
16
190
Enter the initial head position
50
Sequence of requst access:
82 170 43 140 24 16 190
 Total Head Moment is 642*/