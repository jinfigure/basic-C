#include <stdio.h>
int *report_card (int *s) ;
//loader coad//
int main () {
    int score[1001];
    int *show;
    int count = 0;

    do {
        scanf("%d", &score[count++]);
    } while (score[count - 1] != -1);

    show = report_card(score);

    count = 0;
    while (*(show + count) != -1) {
        printf("%d ", *(show + count));
        count++;
    }
}

//function//
int *report_card (int *s) {
	int len=0,i,l=0,start=0,S=0,sum=0,B;
    for(i=0;*(s+i)!=-1;i++){
        if(*(s+i)>=60){
            l++;
            S+=*(s+i);
            if(S>sum&&l>=len){
                len=l;
                sum=S;
                B=i;
            }
        }
        else{
            l=0;
            S=0;
        }
    }
    start=B-len+1;
    *(s+B+1)=-1;
    return s+start;
}
