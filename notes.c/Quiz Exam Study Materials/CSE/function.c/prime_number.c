// Prime Number or Not
#include<stdio.h>  
  
int main()  
{  
    int num, count, prime = 1;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    for(count = 2; count < num; count++)  
    {  
        if(num % count == 0)  
        {  
            prime = 0;  
            break;  
        }  
    }  
  
    if(prime)  
        printf("%d is a Prime Number\n", num);  
    else  
        printf("%d is a not Prime Number\n", num);  
  
    return 0;  
}  
//prime factor using fuction
#include<stdio.h>  
void primefactors(int num)  {  
    int count;  
    printf("\nPrime Factors of %d are ..\n", num);  
    for(count = 2; num > 1; count++)  {  
        while(num % count == 0)  {  
            printf("%d ", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
}    
int main()  {  
    int num;  
    printf("Enter a positive integer\n");  
    scanf("%d", &num);  
    primefactors(num);  
    return 0;  
}


//express a number as sum of two prime number
#include<stdio.h>
#include<math.h>
int nxtPrime(int);
int isPrime(int);
int main(){
    int num, count, flag = 0;
    printf("Enter a positive number\n");
    scanf("%d", &num);
    for(count = 2; count <=(num-count); count = nxtPrime(count)){
        if(isPrime(num-count)){
            flag = 1;
            printf("%d + %d = %d\n", count, num-count, num);
        }
    }
    if(flag == 0){
        printf("%d cannot be expressed as the sum of 2 prime numbers.\n", num);
    }
    return 0;
}
int nxtPrime(int num){
    do{
        num++;
    }while(!isPrime(num));
return(num);
}
int isPrime(int num){
    int count, inum, prime = 1;
    inum = sqrt(num);
    for(count = 2; count <= inum; count++){
        if(num % count == 0){
            prime = 0;
            break;
        }
    }
    return(prime);
}


//count prime number between range
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void printAndCountPrimesInRange(int start, int end) {
    int count = 0;
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nNumber of prime numbers between %d and %d: %d\n", start, end, count);
}

int main() {
    int start, end;


    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    
    if (start > end) {
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }

    printAndCountPrimesInRange(start, end);

    return 0;
}
