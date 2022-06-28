//ece akdemir
//quiz 1
//201811002
#include <stdio.h>
int findHamming(int x[],int z[],int m);
int main (void)
{
int a[30],b[30];
int n,i,dist;
printf("Enter size (n<30):");
scanf("%d",&n);
printf("Enter %d digits:",n);
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("Enter %d digits:",n);
for(i=0;i<n;i++)
 scanf("%d",&b[i]);
dist=findHamming(a,b,n);
printf("Hamming distance between them is %d\n",dist);
return 0;
}

int findHamming(int x[],int z[],int m)
{
int dist=0,i;
for(i=0;i<m;i++)
{
	if(x[i]!=z[i])
		dist++;
}
return dist;
}
