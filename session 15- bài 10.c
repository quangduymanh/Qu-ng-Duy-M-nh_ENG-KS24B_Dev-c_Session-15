#include <stdio.h>
#include <string.h>
int main(){
    char str[]="ddfbyhnjff"; 
    int count[200]={0};   
    for (int i=0;str[i]!='\0';i++){
        count[str[i]]++;
    }
    for (int i=0;i<200; i++){
        if (count[i]>0){
            printf("%c:%d\n",i,count[i]);
        }
    }
    return 0;
}
