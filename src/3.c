#include<stdio.h>
int main(void)
{
	char ch,nch;
	int count,k;

	printf("Input a string with a # in the end.\n");
	scanf("%c",&ch);
	while(ch != '#')
	{
		if(ch>='0' && ch<='9'){
			count=ch-'0'+1;
			scanf("%c",&nch);
			for(k=0;k<count;k++)
			printf("%c",nch);
		}
		else
		printf("%c",ch);

		printf(" ");
		scanf("%c",&ch);
	}
	printf("#\n");

	return 0;
}
