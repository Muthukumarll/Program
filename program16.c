#include <stdio.h>
#include<conio.h>
int main(void) {
	int n,m,prod;
  clrscr();
	scanf("%d %d",&n,&m);
	prod=n*m;
	if(prod%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
  getch();
	return 0;
}
