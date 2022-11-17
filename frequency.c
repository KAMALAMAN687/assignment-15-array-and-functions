#include<stdio.h>
int main()
{
    int i,a[4],b[10]={0,0},l=0,j;
      for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<4;i++)
    {
        b[a[i]]++;
    }
    i=0;
    for(i=0;i<=9;i++)
    {
       if(b[i]!=0)
       {
        printf("sequence of %d is %d \n",i,b[i]);
       }
    }
}
