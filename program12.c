#include<stdio.h>
#include<math.h>
void sort(long int *a,long int n);
void swap(long int *x,long int *y);
main()
{
long int d=0,a,x,y,z,b,i=0,j,k,l,c=0;
long int p[100], q[100];
printf("Enter the number: ");
scanf("%ld",&a);
b=a;
while (b!=0)
 {
 p[i++]=(b%10);
 b/=10;
 }
sort(p,i);
for (j=0;j<i;++j)
c+= (p[j])*(pow(10,i-1-j));
for (x=pow(10,i-1);x<=c;++x)
  {
  y=x,l=0,z=0;
  while (y!=0)
	{
	q[l++]= (y%10);
	y/=10;
	}
  sort(q,i);
  for (k=0;k<i;++k)
	 {
	 if (q[k]==p[k])
	 ++z;
	 else
	 goto fool;
	 }
  if (z==i)
	  {
	  printf("%ld\n",x);
	  ++d;
	  }
fool: }
printf("No. of possible permutations of %ld is %ld",a,d);
}
void sort(long int *a,long int n)
	  {
	  long int p=n-1,i;
	  while (p>=0)
		{
		for(i=0;i<=(p-1);++i)
		 {
		 if (a[i]<=a[i+1])
		 swap(&a[i],&a[i+1]);
		 else
		 continue;
		 }
		--p;
		}
	  }
void swap(long int *x,long int *y)
		{
		long int t;
		t=*x;
		*x=*y;
		*y=t;
		}
