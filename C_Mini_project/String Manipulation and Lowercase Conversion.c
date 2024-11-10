#include<stdio.h>
#include<ctype.h>

void read_string(char ch[], int length){
    scanf("%s", ch);
    print_string(ch, length);
}

char to_lowercase(char ch){
    return ch - 'A' + 'a';
}

void print_string(char ch[], int length){    
    for(int i = 0; i < length; i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            char s = to_lowercase(ch[i]);
            printf("%c", s);
        }
    }
}

int main(){
    int length;
    scanf("%d", &length);
    char ch[length];
    read_string(ch, length);
    
    return 0; 
}
