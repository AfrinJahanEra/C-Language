#include<stdio.h>

struct inventory_managment{
   int productID;
   char name[50];
   double unitPrice;
   int stockQ; 
};
int main(){
     struct inventory_managment s1[10]={
        {1,"Egg",50,3},
        {2,"Milk",90,8},
        {3,"Fish",80,5},
        {4,"Water",20,7},
        {5,"Powder",30,4},
        {6,"Shampoo",10,8},
        {7,"Cloth",40,7},
        {8,"Shirt",80,6},
        {9,"Clock",90,5},
        {10,"Flower",30,8}
    };
    printf("ProductId\tName\n");
    int i;
    for(i=0;i<10;i++){
        if(s1[i].stockQ>0 && s1[i].unitPrice<100.0){
            printf("%d\t%s\n",s1[i].productID, s1[i].name);
        }
    }

return 0;
}
