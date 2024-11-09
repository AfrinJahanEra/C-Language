#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int a[t],b[t],c[t],d[t];
int i;
for(i=0;i<t;i++){
    scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
}
int win1[i],win2[i];
for(i=0;i<t;i++){
    if(a[i]>b[i]){
        win1[i]=a[i];
    }
    else{
        win1[i]=b[i];
    }
    if(c[i]>d[i]){
        win2[i]=c[i];
    }
    else{
        win2[i]=d[i];
    }
}


int max1[i],max2[i];
for(i=0;i<t;i++){
    (a[i] > b[i]) ? (max1[i]=a[i],max2[i]=b[i]):(max1[i]=b[i],max2[i]=a[i]);
}
for(i=0;i<t;i++){
if(max1[i] < c[i]){
    max2[i] = max1[i];
    max1[i] = c[i];
    
}
else if (max2[i] < c[i]){
    max2[i] = c[i];
}
}
for(i=0;i<t;i++){
if(max1[i] < d[i]){
    max2[i] =max1[i];
    max1[i] = d[i];
    
}
else if (max2[i] < d[i]){
    max2[i] = d[i];
}
}
for(i=0;i<t;i++){
    if((win1[i]==max1[i] || win1[i]==max2[i]) && (win2[i] == max1[i] || win2[i]==max2[i])){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}
