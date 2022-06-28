//ECE AKDEMÝR
//201811002
//LAB 7 QUESTION 4

#include <string.h>
#include <stdio.h>
int main (void)
{
 char s[40];
 int i=0;
 printf("Enter a sentence(less then 40 character):");
 gets(s);
 while(s[i]!='\0')
 {
     if(s[i]==' ')
        s[i]='?';
     i++;
 }
 puts(s);
 return 0;
}
