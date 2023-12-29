#include<stdio.h>
#include<stdlib.h>


int partition(int a[], int start, int end) {
    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j < end - 1; j++) {
        if (a[j] < pivot) {
            i++;

            // Swap a[i] and a[j]
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // Swap a[i+1] and a[end]
    int temp = a[i + 1];
    a[i + 1] = a[end];
    a[end] = temp;

    return i + 1;
}
void quickSort(int a[],int start, int end)
{
    if(end<=start)
    {
        return;
    }
    int pivot;
    pivot=partition(a,start,end);
    quickSort(a,start,pivot-1);
    quickSort(a,pivot+1,end);



}


void main()
{
    int a[]={8,2,5,3,9,4,7,6,1};
    int n=9;
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
