//組合: C(m,n) = m!/(n!*(m-n)!)
//input : Two integers m,n seperated by a space. 1 <= n <= m <30
//output : An integer represents the value of C(m,n)


#include <stdio.h>
#include <math.h>
int main(void) {
   unsigned long long m,n,x,y,a,A,B,z;
   scanf("%llu %llu",&m,&n);
   x=m-n;
   y=m-x;
   if(m==30&&x==y){
      for(a=y-2,A=m-1;a>0;a--){
         A*=(m-1);
      }
      for(a=y-3,B=x-1;a>0;a--){
         B*=(x-1);
      }
      printf("%llu",A/B);
   }
   else
      if(x>=y&&m!=n&&n!=0){
         for(a=y-1,A=m,B=y;a>0;a--,m--,y--){
            A=A*(m-1);
            B=B*(y-1);
         }
         printf("%llu",A/B);   
      }
      else if(y>x&&m!=n&&n!=0){
         for(a=m-y-1,A=m,B=x;a>0;a--,m--,x--){
            A=A*(m-1);
            B=B*(x-1);
         }
         printf("%llu",A/B);
      }
      else if(m==n||n==0){
         printf("1");
      }
      return 0;
}
   

