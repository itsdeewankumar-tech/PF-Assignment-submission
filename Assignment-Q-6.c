#include <stdio.h>

int main ()
{
    int i, j, k;
    printf("enter values of i, j, k.");
    scanf("%d %d %d", &i, &j, &k);

if (i < j)
{
    if (j < k)
    {
        i = j;
    }
    else
    {
        j = k;
}}
else
{
    if (j > k)
    {
        i = j;
    }
    else
       {
           i = k;
           
       }
}
printf("%d %d %d", i, j, k);
return 0;
}
