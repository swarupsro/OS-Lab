#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],n,i,t=0;

    printf("Enter Starting head pointer position:\n");
    scanf("%d",&a[0]);
    printf("Enter number of disk request:\n");
    scanf("%d",&n);
    printf("Enter request in order\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)

        {
            printf("INVALID INPUT \n");
            exit(0);
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<a[i+1])
            t+=(a[i+1]-a[i]);
        else
            t+=(a[i]-a[i+1]);
    }
    printf("Processing order:\n");
    for(i=0; i<=n; i++)
        printf("\t %d",a[i]);
        printf("\n");
    printf("Total Head Movement:%d \n",t);
    return 0;
}
