#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	int choice, i, a, b;
	float x, y, result;
	system("cls");
	do
	{
		printf("\nSelect your operation(0 to exit):\n");
		printf("1.Addition\n2.Substraction\n3.Multiplication\n4.division\n");
		printf("5.Square root\n6.x^y\n7.x^2\n8.x^3\n9.1/x\n10.x^(1/y)\n");
		printf("11.x^(1/3)\n12.10^x\n13.x!\n14.%\n15.log10(x)\n16.Modulus\n");
		printf("17.sin(x)\n18.cos(x)\n19.tan(x)\n20.cosec(x)\n21.cot(x)\n22.sec(x)");
		printf("\nPlease enter your valid choice: ");
		scanf("%d", &choice);
		if (choice == 0)
		{
			exit(0);
		}
		switch (choice)
		{
		case 1:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = x + y;
			printf("\nResult:%f", result);
			break;
		case 2:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = x - y;
			printf("\nResult:%f", result);
			break;
		case 3:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = x * y;
			printf("\nResult:%f", result);
			break;
		case 4:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = x / y;
			printf("\nResult:%f", result);
			break;
		case 5:
			printf("Enter X: ");
			scanf("%f", &x);
			result = sqrt(x);
			printf("\nResult:%f", result);
			break;
		case 6:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = pow(x, y);
			printf("\nResult:%f", result);
			break;
		case 7:
			printf("Enter X: ");
			scanf("%f", &x);
			result = pow(x, 2);
			printf("\nResult:%f", result);
			break;
		case 8:
			printf("Enter x: ");
			scanf("%f", &x);
			result = pow(x, 3);
			printf("\nResult:%f", result);
			break;
		case 9:
			printf("Enter X: ");
			scanf("%f", &x);
			result = pow(x, -1);
			printf("\nResult:%f", result);
			break;
		case 10:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = pow(x, (1 / y));
			printf("\nResult:%f", result);
			break;
		case 11:
			printf("Enter x: ");
			scanf("%f", &x);
			y = 3;
			result = pow(x, (1 / y));
			printf("Result:%f", result);
			break;
		case 12:
			printf("Enter x: ");
			scanf("%f", &x);
			y = 3;
			result = pow(10, x);
			printf("Result:%f", result);
			break;
		case 13:
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1;
			for (i = 1; i <= x; i++)
			{
				result = result * i;
			}
			printf("\nResult:%f", result);
			break;
		case 14:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = (x * y) / 100;
			printf("\nResult:%2f", result);
			break;
		case 15:
			printf("Enter x: ");
			scanf("%f", &x);
			result = log10(x);
			printf("\nResult:%2f", result);
			break;
		case 16:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = a % b;
			printf("\nResult:%f", result);
			break;
		case 17:
			printf("Enter x: ");
			scanf("%f", &x);
			result = sin(x * 3.14159 / 180);
			printf("\nResult:%2f", result);
			break;
		case 18:
			printf("Enter x: ");
			scanf("%f", &x);
			result = cos(x * 3.14159 / 180);
			printf("\nResult:%2f", result);
			break;
		case 19:
			printf("Enter x: ");
			scanf("%f", &x);
			result = tan(x * 3.14159 / 180);
			printf("\nResult:%2f", result);
			break;
		case 20:
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1 / (sin(x * 3.14159 / 180));
			printf("\nResult:%2f", result);
			break;
		case 21:
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1 / (tan(x * 3.14159 / 180));
			printf("\nResult:%2f", result);
			break;
		case 22:
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1 / (cos(x * 3.14159 / 180));
			printf("\nResult:%2f", result);
			break;
		default:
			printf("\nInvalid Choice...");
		}
	} while (choice);
	getch();
	return 0;
}
