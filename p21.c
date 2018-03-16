#include <stdio.h>
#include<conio.h>
int main(void) {
	char s[10];
	int i,flag=0,j;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!=0;j++)
		{
			if(s[i]==s[j])
			{
				printf("no");
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}

if(flag==0)
{
	printf("yes");
}
getch();
	return 0;
}
