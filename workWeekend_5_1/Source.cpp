#include<stdio.h>

double discount(int money, double dis) {
	return money * ((100 - dis) / 100);

}

int main() {
	double m;
	printf("Pleaase input number for check your bill : ");
	scanf_s("%lf", &m);


	if (m > 0 && m < 1000)
	{
		printf("Your bill : %.2lf\nThank you.\n", m);
	}

	else if (m >= 1000 && m < 10000)
	{
		discount(m, 10);
		printf("You have the 10%% trade discount.\nYour bill : %.2lf\nThank you.\n", discount(m, 10));
	}

	else if (m >= 10000 && m < 50000)
	{
		discount(m, 15);
		printf("You have the 15%% trade discount.\nYour bill : %.2lf\nThank you.\n", discount(m, 15));
	}

	else if (m >= 50000)
	{
		discount(m, 20);
		printf("We have the 20%% trade discount.\nYour bill : %.2lf\nThank you.\n", discount(m, 20));
	}

	else
	{
		do {
			printf("Number is not check,try again.\n");
			printf("Pleaase input number for check your bill : ");
			scanf_s("%lf", &m);

			if (m > 0 && m < 1000)
			{
				printf("Your bill : %.2lf\nThank you.\n", m);
			}

			else if (m >= 1000 && m < 10000)
			{
				discount(m, 10);
				printf("You have the 10%% trade discount.\nYour bill : %.2lf\nThank you\.n", discount(m, 10));
			}

			else if (m >= 10000 && m < 50000)
			{
				discount(m, 15);
				printf("You have the 15%% trade discount.\nYour bill : %.2lf\nThank you.\n", discount(m, 15));
			}

			else if (m >= 50000)
			{
				discount(m, 20);
				printf("We have the 20%% trade discount.\nYour bill : %.2lf\nThank you.\n", discount(m, 20));
			}
		} while (m <= 0);
	}

}