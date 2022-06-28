//201811002
//ECE AKDEMÝR
//QUESTION 4

#include<stdio.h>
int main(void)
{
int arr[10];
int small=0,big,i,s,z,keep;
for(i=0;i<10;i++)
{
	printf("Enter %d. integer:",i+1);
	scanf("%d",&arr[i]);
}
small=arr[0];
for(s=0;s<10;s++)
{
	if(arr[s]<small)
	{
		small=arr[s];
		keep=s;
	}
}
printf("Smallest is %d\n ",small);

if(keep == 0)
    big=arr[1];
else
    big=arr[0];
//if(arr[0]==arr[keep])
//   big=arr[1];
for(z=0;z<10;z++)
{
	if(z == keep)
        z++;
	if(arr[z]<big)
		big=arr[z];
}
printf("2. Smallest is %d ",big);
return 0;
}
