#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int startnum;
	int random;
		
	printf("choose menu number\n");
	printf("------------------\n");
	printf("1. R O C K        \n");
	printf("2. S I S S O R    \n");
	printf("3. P A P E R      \n");
	printf("------------------\n");

	scanf("%d", &startnum);
	
	srand(time(0));
	random = (rand()%3) + 1;

	printf("random : %d", random);
	printf("\n");
	
	if (random == 1)
	{
		printf("Computer : R O C K");
		printf("\n");
	}
	else if (random == 2)
	{
		printf("Computer : S I S S O R");
		printf("\n");
	}
	else
	{
		printf("Computer : P A P E R");
		printf("\n");
	}

	if (startnum == random)
	{
		printf("D R A W !\n");
	}
	
	if (startnum == 1 && random == 3)
	{
		printf("L O O S E !\n");
	}
	else if (startnum == 1 && random == 2)
	{
		printf("W I N !\n");
	}

	if (startnum == 2 && random == 3)
	{
		printf("W I N !\n");
	}
	else if (startnum == 2 && random == 1)
	{
		printf("L O O S E !\n");
	}

	if (startnum == 3 && random == 1)
	{
		printf("W I N !\n");
	}
	else if (startnum == 3 && random == 2)
	{
		printf("L O O S E !\n");
	}

	return 0;
}
