//此題題目在README中

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>
#define N 501
int main(void) {
   int a[N]={},n,i,m,x,ring;
   int b;
   int c[N]={};
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(m=0,ring=0,x=0;x!=n;){
     for(b=a[m],c[m]=1;;){
        if(b!=m){
           c[b]=1;
           b=a[b];
           x++;
        }
        else{
           x++;
           for(c[m];c[m]==1;m++);
           ring++;
           break;
        }
      }
   }
   printf("%d rings\n",ring);

   int d[N]={0};
   for(m=0,ring=0,x=0;x!=n;){
      printf("%d ",m);
     for(b=a[m],d[m]=1;;){
        if(b!=m){
           printf("-> %d ",b);        
           d[b]=1;
           b=a[b];
           x++;
        }
        else{
           printf("-> %d\n",m);
           x++;
           for(d[m];d[m]==1;m++);
           ring++;
           break;
        }
      }
   }
      return 0;
}
