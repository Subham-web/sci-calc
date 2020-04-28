#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
	int choice, i, a, b;
	float x, y, result;
	system("cls");
	do
	{
		printf("\nSelect Your Operation(0 to exit): ");
		printf("\n1.addition\n2.Substraction\n3.multiplication\n4.Division\n");
		printf("5.Square root\n6.X^Y\n7.X^2\n8.X^3\n");
		printf("9.1/X\n10.X^(1/Y)\n11.X^(1/3)\n");
		printf("12.10^X\n13.X!\n14.%\n15.log10(x)\n16.Modulus\n");
		printf("17.Sin(X)\n18.Cos(X)\n19.Tan(X)\n20.Cosec(X)\n");
		printf("21.Cot(X)\n22.Sec(X)\n");
		printf("Choice: ");
		scanf("%d", &choice);
		if (choice == 0)
		{
			exit(0);
		}
		switch (choice)
		{
		case '1':
			printf("Enter x: ");
			scanf("%f", &x);
			printf("Enter y: ");
			scanf("%f", &y);
			result = x + y;
			printf("\nResult: %f", result);
			break;
		case '2':
			printf("Enter x: ");
			scanf("%f", &x);
			printf("Enter y: ");
			scanf("%f", &y);
			result = x - y;
			printf("Result:%f", result);
			break;
		case '3':
			printf("Enter x: ");
			scanf("%f", &x);
			printf("Enter y: ");
			scanf("%f", &y);
			result = x * y;
			printf("Result:%f", result);
			break;
		case '4':
			printf("Enter x: ");
			scanf("%f", &x);
			printf("Enter y: ");
			scanf("%f", &y);
			result = x / y;
			printf("Result:%f", result);
			break;
		case '5':
			printf("Enter x: ");
			scanf("%f", &x);
			result = sqrt(x);
			printf("Result:%f", result);
			break;
		case '6':
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter y: ");
			scanf("%f", &y);
			result = pow(x, y);
			printf("Result:%f", result);
			break;
		case '7':
			printf("Enter x: ");
			scanf("%f", &x);
			result = pow(x, 2);
			printf("Result:%f", result);
			break;
		case '8':
			printf("Enter x: ");
			scanf("%f", &x);
			result = pow(x, 3);
			printf("Result:%f", result);
			break;
		case '9':
			printf("Enter x: ");
			scanf("%f", &x);
			result = pow(x, -1);
			printf("Result:%f", result);
			break;
		case '10':
			printf("Enter x: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = pow(x, (1 / y));
			printf("Result:%f", result);
			break;
		case '11':
			printf("Enter x: ");
			scanf("%f", &x);
			y = 3;
			result = pow(x, (1 / y));
			printf("Result:%f", result);
			break;
		case '12':
			printf("Enter x: ");
			scanf("%f", &x);
			result = pow(10, x);
			printf("Result:%f", result);
			break;
		case '13':
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1;
			for (i = 1; i <= x; i++)
			{
				result = result * i;
			}
			printf("Result: %f", result);
			break;
		case '14':
			printf("Enter x: ");
			scanf("%f", &x);
			printf("Enter Y: ");
			scanf("%f", &y);
			result = (x * y) / 100;
			printf("Result:%2f", result);
			break;
		case '15':
			printf("Enter x: ");
			scanf("%f", &x);
			result = log10(x);
			printf("Result:%2f", result);
			break;
		case '16':
			printf("Enter x: ");
			scanf("%d", &a);
			printf("\nEnter y: ");
			scanf("%d", &b);
			result = a % b;
			printf("Result:%d", result);
			break;
		case '17':
			printf("Enter x: ");
			scanf("%f", &x);
			result = sin(x * 3.14159 / 180);
			printf("Result: %2f", result);
			break;
		case '18':
			printf("Enter x: ");
			scanf("%f", &x);
			result = cos(x * 3.14159 / 180);
			printf("Result: %2f", result);
			break;
		case '19':
			printf("Enter x: ");
			scanf("%f", &x);
			result = tan(x * 3.14159 / 180);
			printf("Result: %2f", result);
			break;
		case '20':
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1 / (sin(x * 3.14159 / 180));
			printf("Result: %2f", result);
			break;
		case '21':
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1 / (tan(x * 3.14159 / 180));
			printf("Result: %2f", result);
			break;
		case '22':
			printf("Enter x: ");
			scanf("%f", &x);
			result = 1 / cos(x * 3.14159 / 180);
			printf("Result: %2f", result);
			break;
		default:
			printf("\nInvalid Choice...");
		}
	} while (choice);
	_getch();
}