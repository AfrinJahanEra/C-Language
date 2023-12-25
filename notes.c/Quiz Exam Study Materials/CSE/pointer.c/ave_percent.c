//C Program To Calculate Average and Percentage of Marks Obtained

#include<stdio.h>  
  
void percentage(float, float, float, int*,  
                float*, float*, float*);  
  
int main()  
{  
    float a, b, c, total = 0, avg = 0, percent = 0;  
    int max;  
  
    printf("Enter marks obtained in 3 subjects\n");  
    scanf("%f%f%f", &a, &b, &c);  
  
    printf("What's the total marks(of 3 subjects combined to which the exam was conducted\n");  
            
    scanf("%d", &max);  
  
    percentage(a, b, c, &max, &total, &avg, &percent);  
  
    printf("\nTotal Marks Obtained = %0.2f\n", total);  
    printf("Average = %0.2f\n", avg);  
    printf("Percentage = %0.2f\n", percent);  
  
    return 0;  
}  
  
void percentage(float x, float y, float z, int *max,  
                float *tot, float *avg, float *per)  
{  
    *tot = x + y + z;  
    *avg = *tot / 3.0;  
  
    *per = *tot * 100.0 / (float)*max;  
}  

// Output 1:
// Enter marks obtained in 3 subjects
// 42
// 41
// 32
// What’s the total marks(of 3 subjects combined) to which the exam was conducted
// 150

// Total Marks Obtained = 115.00
// Average = 38.33
// Percentage = 76.67

// Output 2:
// Enter marks obtained in 3 subjects
// 123
// 145
// 140
// What’s the total marks(of 3 subjects combined) to which the exam was conducted
// 450

// Total Marks Obtained = 408.00
// Average = 136.00
// Percentage = 90.67
// Ezoic

// Output 3:
// Enter marks obtained in 3 subjects
// 92
// 85
// 96
// What’s the total marks(of 3 subjects combined) to which the exam was conducted
// 300

// Total Marks Obtained = 273.00
// Average = 91.00
// Percentage = 91.00