//C Program To Find Area and Circumference of Circle using Pointer

#include<stdio.h>  
  
void area_peri(float, float*, float*);  
  
int main()  
{  
    float radius, area, perimeter;  
  
    printf("Enter radius of Circle\n");  
    scanf("%f", &radius);  
  
    area_peri(radius, &area, &perimeter);  
  
    printf("\nArea of Circle = %0.2f\n", area);  
    printf("Perimeter of Circle = %0.2f\n", perimeter);  
  
    return 0;  
}  
  
void area_peri(float r, float *a, float *p)  
{  
    *a = 3.14 * r * r;  
    *p = 2 * 3.14 * r;  
}  
// Output 1:
// Enter radius of Circle
// 5

// Area of Circle = 78.50
// Perimeter of Circle = 31.40

// Output 2:
// Enter radius of Circle
// 14

// Area of Circle = 615.44
// Perimeter of Circle = 87.92