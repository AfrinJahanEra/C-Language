#include<stdio.h>
#include<ctype.h>

    
void read_string(char ch[],int length){
    // int i;
    // getchar();
    // for(i=0;i<length;i++){
    //     scanf("%c",&ch[i]);
    //     printf("%c",ch[i]);
    // }
    scanf("%s",ch);
    
    print_string(ch,length);
    
    return;
}
char to_lowercase(char ch){
    char temp=ch-'A'+'a';
    return temp;
}
void print_string(char ch[],int length){    
    int i;
    for(i=0;i<length;i++){
        if(ch[i]>='A'&& ch[i]<='z'){
           char s=to_lowercase(ch[i]);
            printf("%c",s);
        }
    }
   
    return;
}
int main(){
    int length;
    scanf("%d",&length);
    char ch[length];
    read_string(ch,length);
    
    return 0; 
}

