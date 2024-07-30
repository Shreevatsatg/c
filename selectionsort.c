#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[20],j,min,temp;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("elements after sorting= ");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    getch();
}
