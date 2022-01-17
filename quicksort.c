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