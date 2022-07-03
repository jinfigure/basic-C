//凱薩加密器
//input:兩行 第一行為偏移量:k(integer) 第二行為欲加密的文字(plain text)
//output: 一行以輸入的偏移量加密過的純文字 標點符號以原樣輸出
              


#include <stdio.h>
int main(void) {
   int k;
   int x;
   scanf("%d\n",&k);
  while((x=getchar())!='\n'){
   if(x>='A'&&x<='Z'){
    if(k>0){
        x=x+(k%26);
        if(x>'Z'){
            x=x-26;
        }
    }
    else {
        x=x+(k%26);
        if(x<'A'){
            x=x+26;
        }
    }
    putchar(x);
   }
  else if(x>='a'&&x<='z'){
   if(k>0){
        x=x+(k%26);
        if(x>'z'){
            x=x-26;
        }
    }
    else{
        x=x+(k%26);
        if(x<'a'){
            x=x+26;
        }
    }
    putchar(x);
   }
   else{
       putchar(x);
   }
  }
   return 0;
}
