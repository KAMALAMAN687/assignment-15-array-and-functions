#include<stdio.h>
int totalnoduplicate(int b[],int c);
int main()
{
     printf("enter the no. you want to enter in a matrix: \n");
    int b;
    scanf("%d",&b);
    int a[b],i;
    printf("enter a numbers:");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("duplicate value is %d",totalnoduplicate(a,b));
    return 0;

}
int totalnoduplicate(int b[],int c)
{
    int i,j,l=0;
    for(i=0;i<c-1;i++)
    {
       for(j=i+1;j<c;j++)
       {
         if(b[i]==b[j])
         {
            l++;
         }
       }
    }
    return l;

}   
