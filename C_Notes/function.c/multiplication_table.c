#include<stdio.h>

void tables(int);

int main()
{
    int num;

    printf("Enter a positive number\n");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d is:\n", num);

    tables(num);

    return 0;
}

void tables(int num)
{
    int count;

    for(count = 1; count <= 10; count++)
    {
        printf("%d x %d = %d\n", num, count, num*count);
    }
}
//or
//Just For Some Number Fun
//Here I’m initializing 3 to count variable. For loop executes until count is less than or equal to 27. For each iteration of for loop count value increments by 3.
#include<stdio.h>

void tables(int);

int main()
{
    int num = 37;

    printf("\nMultiplication Table for %d is:\n", num);

    tables(num);

    return 0;
}

void tables(int num)
{
    int count;

    for(count = 3; count <= 27; count += 3)
    {
        printf("%d x %d = %d\n", num, count, num*count);
    }
}