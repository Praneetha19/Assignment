#include <stdio.h>
int main()
{
    int a[100];
    int n,i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter number:");
        scanf("%d",&a[i]);
    }
    printf("Elements before sorting are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    Selection_Sort(a,n);
    printf("Elements after sorting are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
int Selection_Sort(int a[],int n)
{
    int i,j,t,mini;
    for (i=0;i<n-1;i++)
    {
        mini=i;
        for (j=i+1;j<n;j++)
        {
            if (a[j]<a[mini])
            {
               mini=j;
            }
        }
        t=a[mini];
        a[mini]=a[i];
        a[i]=t;
    }
    return 0;
}

