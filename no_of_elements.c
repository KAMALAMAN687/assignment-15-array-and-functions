#include<stdio.h>
void no_of_element(int a[],int b)
{
    int i;
    printf("reverse matrix is\n");
    for(i=b-1;i>=0;i--)
    {
        printf("%d\n",a[i]);

    }
    
}
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
    no_of_element(a,b);

}