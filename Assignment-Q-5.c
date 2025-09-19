#include<stdio.h>
int main()
{
    int count[10] = {0};
    int num, i;
    while(1)
    {
        printf("Enter numbers:");
        scanf("%d",&num);
        if(num>=0&&num<10)
        {
            count[num]++;
        }
        else
        {
            break;
        }
    }+
    printf("\nNumber   Number Of Occurances");
    for(i=0;i<10;i++)
    {
        printf("\n%d                             %d",i,count[i]);
    }
    return 0;


    
}
