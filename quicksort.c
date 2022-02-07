#include <stdio.h>
#define N 500
#define swap(x, y) {int tmp = x; x = y; y = tmp;}

void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);

int size;

int main(void)
{
    int array[N];
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

int partition(int a[size],int low,int high){
    int s,i,n;
    n=low;
    for(s=low;low<high;low++){
    if(a[low]<=a[high]){
    swap(a[s],a[low]);
    s++;
    }
    }
    swap(a[s],a[high]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("[ ");
    for(i=n;i<s;i++)
    printf("%d ",a[i]);
    printf("*%d ",a[s]);
    for(i=s+1;i<=high;i++)
    printf("%d ",a[i]);
    printf("] ");
    for(i=high+1;i<size;i++)
    printf("%d ",a[i]);
    printf("\n");
    high=s;
    low=high;
    return high;
}

void quicksort(int a[size],int low,int high){
    int middle,i;
    if(size==1) return;
    if(low>=high)
    return;
    middle=partition(a,low,high);
    quicksort(a,low,middle-1);
    quicksort(a,middle+1,high);
}
