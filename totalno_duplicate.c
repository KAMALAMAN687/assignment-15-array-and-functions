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
    printf("first adjacent duplicate values is %d",totalnoduplicate(a,b));
    return 0;

}
int totalnoduplicate(int b[],int c)
{
    int i,j,l=0;
    for(i=0;i<c-1;i++)
    {
        if(b[i]==b[i+1])
        {
            return b[i];
        }
         
       
    }
}