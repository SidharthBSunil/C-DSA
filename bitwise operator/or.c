#include<stdio.h>

int main()
{
    unsigned int a=2,b=5;
    /*
    
    evide 2 is 10 and 5 is 101
    or cheyupol evide one ondoo result one  varum 101 or 10==111 [7 in decimal]
    so we can it for set bit or to make bit one
    
    */
    printf(" a or b is %u\n",a|b);

    /*
    and il evide zero avide result zero ann 101 & 10 ==0
    so we can use it for clear bits
    
    */
   printf("a and b is %u\n",a&b);

   /*
   a xor 1 is opposite of a binary that is same bit angil 0 and opposite bit angil 1
   
   a is 10 it change 10^11 =01 that is (1) [ 01 it is opposite of 10 (2)]
   */
  printf("a xor 1 is %u\n",a^3);
  /*
  one bit moves to left side 101 changes to 1010 that is 10 in decimal
  */
  printf("left shift of b is %u\n",b<<1);
  /*
  one bit moves to right side 101 changes to 10 that is 2 in decimal
  */
 printf("right shift of b is %u\n",b>>1);


}
