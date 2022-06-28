//ECE AKDEMÝR
//201811002
//LAB 8 QUESTION 1
#include<stdio.h>
#include<string.h>
int main(void)
{
   char s[70];
   int i,j=0,count=1;
   printf("enter a sentence:");
   gets(s);
   i=strlen(s);
   printf("word %d :",count);
   while(j<i)
   {
       if(s[j]!=' ')
          printf("*");
       if(s[j]==' ')
       {
          count++;
          printf("\n");
          printf("word %d :",count);
       }
       j++;
   }
}
