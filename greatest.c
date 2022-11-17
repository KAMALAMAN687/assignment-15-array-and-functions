#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the size of array");
    scanf("%d",&a);
    printf("enter the elements of array");

    int b[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);

    }
    greatest(b,a);

}
int greatest(int c[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(c[i]>c[j])
           {

           }
           else
           break;                            
        }
        if(j==n)
        {
            printf("max value is %d",c[i]);
            return c[i];
        }

    }

}