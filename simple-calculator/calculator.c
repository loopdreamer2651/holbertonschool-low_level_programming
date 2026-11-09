#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


/**
 * calculator - Displays the menu and validates choice
 * Return: user selection or -1
 */

int get_choice(void);

int main(void)
{
	int current_choice;

	do
	{
		current_choice = get_choice();

		switch (current_choice)
        	{
			case 1:
				printf("[Execution placeholder for Addition]\n\n"); 
				break;
			case 2:
				printf("[Execution placeholder for Subtraction]\n\n");
				break;
			case 3:
				printf("[Execution placeholder for Multiplication]\n\n");
				break;
			case 4:
				printf("[Execution placeholder for Division]\n\n");
				break;
	 		default:
				break;
        	}
	} while (current_choice != 0);

	printf("Goodbye!\n");
	return (0);
}

int get_choice (void)
{
	int choice;

	printf("Simple Calculator\n"
	"1) Add\n"
	"2) Subtract\n"
	"3) Multiply\n"
	"4) Divide\n"
	"0) Quit\n"
	"Choice: ");

	/* Making sure the user enter a number*/
	if(scanf("%d", &choice) != 1)
	{
		printf("\nError: Please enter a number on the menu\n");
		while (getchar() != '\n')
		return (-1);
	}
	/* Making sure the user enter an option from menu*/
	if (choice < 0 || choice > 4)
	{
		printf("\nError : Please choose an option between 0 and 4\n");
		return (-1);
	}
	return choice;
}
