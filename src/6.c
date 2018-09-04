#include<stdio.h>
int main(void)
{
	int password=0;
	printf("Guess number game.\n");
	printf("Enter password to loggin game.\n");
	scanf("%d",&password);
	int i=0;

	while(password != 1234){
		if(i>=3)
		return 1;
		i++;
		printf("password error,retry!\n");
		scanf("%d",&password);
	}

	int guess_num;
	const int game_num=30;

	printf("Enter your guess number: \n");
	scanf("%d",&guess_num);

	while(guess_num != game_num){
		if(guess_num > game_num){
			printf("too big!\n");
		}
		else if(guess_num < game_num){
			printf("too small!\n");
		}
		printf("Retry enter :\n");
		scanf("%d",&guess_num);
	}
		printf("Guess good!\n");
		printf("You win this game.\n");

		return 0;
}
