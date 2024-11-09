#include <stdio.h>

int main()
{
    char n1[101]={0}, n2[101]={0}, a[101]={0};
    int count1[100]={0}, count2[100]={0};

    scanf("%s", n1);
    scanf("%s", n2);
    scanf("%s", a);
    for(int i=0; i < 100; i++)
    {
        if(n1[i] > 0)
        {
            count1[n1[i]]++;
        }
        if(n2[i] > 0)
        {
            count1[n2[i]]++;
        }
    }

    for(int i=0; i < 100; i++)
    {
        if(a[i] > 0)
        {
            count2[a[i]]++;
        }
    }

    for(int i; i < 100; )
    {
        if(count1[i] != count2[i])
        {
            printf("NO");
            break;
        }
        i++;
         if(i==100)
        {
            printf("YES");
        }
    }

return 0;
}