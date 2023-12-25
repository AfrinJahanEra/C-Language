#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s1[51];
        char s2[51];
        scanf("%s %s",s1,s2);
        int flag1=0;
        int flag2=0;
        char ch1,ch2;
        for(int i=0;s1[i]!='\0';i++){
            if(s1[i]=='S'){
                flag1=1;
                ch1='S';
                break;
            }
            else if(s1[i]=='L'){
                flag1=2;
                ch1='L';
                break;
            }
            else if(s1[i]=='M'){
                flag1=3;
                ch1='M';
                break;
            }
        }
        for(int i=0;s2[i]!='\0';i++){
            if(s2[i]=='S'){
                flag2=1;
                ch2='S';
                break;
            }
            else if(s2[i]=='L'){
                flag2=2;
                ch2='L';
                break;
            }
            else if(s2[i]=='M'){
                flag2=3;
                ch2='M';
                break;
            }
        }
        int count1=0;
        int count2=0;
        if(flag1==flag2){
            for(int j=0;s1[j];j++){
                if(s1[j]=='X'){
                    count1++;
                }
            }
            for(int j=0;s2[j];j++){
                if(s2[j]=='X'){
                    count2++;
                }
            }
            if(ch1=='S'){
                if(count1>count2){
                    printf("<\n");
                }
                else if(count1<count2){
                    printf(">\n");
                }
                else{
                    printf("=\n");
                }
            }
            else if(ch1=='L'){
                 if(count1>count2){
                    printf(">\n");
                 }
                else if(count1<count2){
                    printf("<\n");
                }
                else{
                    printf("=\n");
                }
            }
            else{
                printf("=\n");
            }
        }
        else{
            if(ch1=='S'&& ch2=='L'){
                printf("<\n");
            }
            else if(ch1=='L'&& ch2=='S'){
                printf(">\n");
            }
            else if(ch1=='L'&& ch2=='M'){
                printf(">\n");
            }
            else if(ch1=='M'&& ch2=='L'){
                printf("<\n");
            }
            else if(ch1=='M'&& ch2=='S'){
                printf(">\n");
            }
            else if(ch1=='S'&& ch2=='M'){
                printf("<\n");
            }
        }
        
    }

    return 0;
}