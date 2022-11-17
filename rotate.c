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
   int p,q;
   printf("enter the position and direction to  shift the array for left press 0 and for right press 1 ");
   scanf("%d%d",&p,&q);
   arrange(b,a,p,q);
   for(i=0;i<a;i++)
   {
    printf("%d",b[i]);
   }
   return 0;

}
void arrange(int b[],int a,int p,int q)
{
    int i,j,c;
    if(q==0)
    {
        while(p)
        {
            c=b[0];
            for(i=0;i<a;i++)
            {
                b[i]=b[i+1];
            }
            if(i==a)
            b[i-1]=c;

            p--;
        }
    }
    else
    {
        while(p)
        {
            c=b[a-1];
            for(i=a-1;i>=0;i--)
            {
                b[i]=b[i-1];
            }
            if(i==-1)
            b[0]=c;

            p--;
        }
        

    }
}