#include<stdio.h>

void main()
{
    unsigned int num,result;
    int nbit,sw;
    printf("Enter the number to manipulate\n");
    scanf("%u",&num);
    printf("Enter position of bit to change \n");
    scanf("%d",&nbit);
    printf("\nEnter 1 for set bit \n Enter 2 for clear bit \n Enter 3 for toggle bit\n");
    scanf("%d",&sw);
    switch(sw)
    {
        case 1:
            result=num|(1<<nbit);
            printf("\nresult is %u\n",result);
            break;
        case 2:
            result=num&~(1<<nbit);
            printf("\nresult is %u\n",result);
            break;
        case 3:
            result=num^(1<<nbit);
            printf("\nresult is %u\n",result);
            break;


    }


}