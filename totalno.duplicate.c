#include<stdio.h>
int totalnoduplicate(int[],int );
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
    printf("%d",totalnoduplicate(a,b));
    return 0;

}
int totalnoduplicate(int b[],int c)
{
    int i,l=0,j;
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
           if(b[i]==b[j])
           l++;
        }
    }
    return l;


    

}