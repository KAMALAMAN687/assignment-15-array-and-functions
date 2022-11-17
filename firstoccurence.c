#include<stdio.h>
int main()
{
    printf("enter the no. of elements : ");
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
   printf("first occurence of adjacent duplicate value is %d",occurence(a,n));

return 0;
}
int occurence(int b[],int n)
{
    int i,j,k=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
                k++;
                break;
            }       
        }
        if(k>=1)
        break;
    }
    return b[i];

}