#include <stdio.h>
#include <stdlib.h>


/**
 * Description: main - we're testing out scanf
 * Return: 0 if success
 */

int main(void)

{
	int num1;
	int num2;

	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number : ");
	scanf("%d", &num2);

	int sum = num1 + num2;
	printf("Answer : %d \n", num1 + num2);

	return (0);

}
