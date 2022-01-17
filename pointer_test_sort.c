void sort_pointers(int **ptr_arr, int *arr, int size)
{
int i,j,*temp;
    for(i=0;i<size;i++){
        *(ptr_arr+i)=arr+i;
    }
    for( i = 0; i < size; i++) {
       for( j = i; j < size; j++) {
           if(**(ptr_arr+j)> **(ptr_arr+i) ) {
               temp = *(ptr_arr+j);
               *(ptr_arr+j) = *(ptr_arr+i);
               *(ptr_arr+i) = temp;
           }
       }
   }
}
