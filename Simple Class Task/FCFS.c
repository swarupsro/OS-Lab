#include<stdio.h>

int main()
{
    int n,brust_time[20],waiting_time[20],turn_around_time[20],average_waiting_time=0,average_turn_around_time=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);

    printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&brust_time[i]);
    }

    waiting_time[0]=0;    //waiting time for first process is 0

    //calculating waiting time
    for(i=1;i<n;i++)
    {
        waiting_time[i]=0;
        for(j=0;j<i;j++)
        {
            waiting_time[i]=waiting_time[i]+brust_time[j];

            printf("\n\tWaiting Time %d %d ",j,waiting_time[i]);

            }
            printf(" End Step \n");

    }

    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        turn_around_time[i]=brust_time[i]+waiting_time[i];
        average_waiting_time+=waiting_time[i];
        average_turn_around_time+=turn_around_time[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,brust_time[i],waiting_time[i],turn_around_time[i]);
    }

    average_waiting_time/=i;
    average_turn_around_time/=i;
    printf("\n\nAverage Waiting Time:%d",average_waiting_time);
    printf("\nAverage Turnaround Time:%d",average_turn_around_time);

    return 0;
}
