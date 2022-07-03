#輸入一整數 並以羅馬數字(字串)輸出

#include<stdio.h>
int main(){
    int x,a,b,c,d,e,f,g;
    scanf("%d",&x);
    a=x/1000;
    b=(x-1000*a)/500;
    c=(x-1000*a-500*b)/100;
    d=(x-1000*a-500*b-100*c)/50;
    e=(x-1000*a-500*b-100*c-50*d)/10;
    f=(x-1000*a-500*b-100*c-50*d-10*e)/5;
    g=(x-1000*a-500*b-100*c-50*d-10*e-5*f);
    if(a>0){
        if(a==3)
            printf("MMM"); 
        else if(a==2)
            printf("MM");
        else
            printf("M");
    }
    if(b>0&&c!=4){
        printf("D");}
    if(c>0){
        if(c==4&&b==1)
            printf("CM");
        else if(c==4&&b==0)
            printf("CD");
        else if(c==3)
            printf("CCC");
        else if(c==2)
            printf("CC");
        else
            printf("C");
    }        
    if(d>0&&e!=4){
        printf("L");
    }
    if(e>0){
        if(e==4&&d==1)
            printf("XC");
        else if(e==4&&d==0)
            printf("XL");
        else if(e==3)
            printf("XXX");
        else if(e==2)
            printf("XX");
        else 
            printf("X");       
    }
    if(f>0&&g!=4){
        printf("V");
    }
    if(g>0){
        if(g==4&&f==1)
        printf("IX");
        else if(g==4&&f==0)
        printf("IV");
        else if(g==3)
        printf("III");
        else if(g==2)
        printf("II");
        else
        printf("I");
    }
    return 0;
}
