#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	char country[20];
	int population;
} City;

void ClearLineFromReadBuffer()
{
	while (getchar() != '\n');
}

void RemoveBSN(char s[])
{
	int len = strlen(s);
	s[len - 1] = 0;
}

void main()
{
	
	City ctemp[3];

	printf("Input three cities:\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("Name> ");
		fgets(ctemp[i].name, sizeof(ctemp[i].name), stdin);
		RemoveBSN(ctemp[i].name); 
		
		printf("Country> ");
		fgets(ctemp[i].country, sizeof(ctemp[i].country), stdin);
		RemoveBSN(ctemp[i].country);
		
		printf("Population> ");
		scanf_s(" %d", &ctemp[i].population);

		ClearLineFromReadBuffer();
	}

	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%s in %s with a population of %d people\n", ctemp[i].name, ctemp[i].country, ctemp[i].population);
	}
}