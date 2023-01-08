#include <stdio.h>
#include <math.h>

int main()
{
	int numberFromUser;
	int numberForDigit;
	int numberForRemainder;
	int digit = 0;
	int remainder;
	int armstrongNumber =0;
	char response = 'y';
	while (response == 'y' || response == 'Y')
	{
		printf ("Enter a number to look is it a armstrong number or not: ");
		scanf ("%d", &numberFromUser);
		fflush(stdin);
		
		numberForRemainder = numberFromUser;
		numberForDigit = numberFromUser;
		
	
		if (numberFromUser >=0)
		{
			while(numberForDigit >= 1)
			{
				numberForDigit /= 10;
				digit ++;
			}
			int i = digit;
			for(;i>0;i--)
			{
				remainder = numberForRemainder / pow(10, i-1);
				numberForRemainder -= remainder * pow(10, i-1);
				armstrongNumber += pow (remainder, digit);
			}
			if(armstrongNumber == numberFromUser)
			{
				printf("%d is an Armstrong number.\n", numberFromUser);
			}
			else
			{
				printf("%d isn't an Armstrong number.\n", numberFromUser);
			}
		}
		else
		{
			printf("Process denied.");
		}
		
		printf("Press 'y' to do again:");
		scanf("%c",&response);
	}
}
