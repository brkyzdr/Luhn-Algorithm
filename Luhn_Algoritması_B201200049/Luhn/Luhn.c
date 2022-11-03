#include <stdio.h>

int main()
{
	printf("Kart Numarasi: ");
	long no;
	scanf_s("%ld", &no);

	long cardNo = no;
	long fileNumber = no;
	int sum = 0;
	sum = cardNo % 10;
	cardNo = cardNo / 10;

	while (cardNo)
	{
		int temp = (cardNo % 10) * 2;
		if (temp > 9)
		{
			temp = temp - 9;
		}
		sum = sum + temp;
		cardNo = cardNo / 10;
		temp = cardNo % 10;
		sum = sum + temp;
		cardNo = cardNo / 10;
	}

	FILE* file;
	file = fopen("sonuc.txt", "a");

	while (no > 10)
	{
		no = no / 10;
	}
	if (no > 3 && no < 6)
	{
		printf("%ld -gecerli\n", fileNumber);
		fprintf(file, "\n%ld -gecerli", fileNumber);
	}
	else
	{
		printf("%ld -gecersiz\n", fileNumber);
		fprintf(file, "\n%ld -gecersiz", fileNumber);
	}

	fclose(file);
	
	return 0;
}