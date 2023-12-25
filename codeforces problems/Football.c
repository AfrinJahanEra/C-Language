#include<string.h>
int main(){
char str[100];
scanf("%s",&str);
int n;
n=strlen(str);
int i=0;
int count1=0,count2=0;

for(i=0;i<n;i++){
    if(str[i]=='0'){
        count2=0;
        count1++;
    }
    else if (str[i]=='1'){
        count1=0;
        count2++;
    }
    if(count1 >= 7){
         break;  
    }
    if(count2 >= 7){
          break;   
    }
}

if(count1>=7 || count2>=7){
     printf("YES");
}
else{
    printf("NO");
}
return 0;
}