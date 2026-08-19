#include<stdio.h>
#include<math.h>
int main()
{
    int i,key,mid,low,high,a[50],n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter the elements of array \n");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("enter the key element to be searched\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("element found at index %d\n",mid);
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        printf("element not found\n");
    }
    return 0;
}   