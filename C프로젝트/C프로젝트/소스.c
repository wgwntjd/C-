#include<stdio.h>
#include"colortext.h"

int main()
{
	int field[37][37] = { 0 };
	color_init();
	for (int i = 0; i < 36; i++)
	{
		field[0][i] = 2;
		field[i][36] = 2;
		field[36][i + 1] = 2;
		field[i + 1][0] = 2;
	}

	for (int i = 19; i < 24; i++)
		field[19][i] = 1;

	for (int i = 0; i < 37; i++)
	{
		for (int j = 0; j < 37; j++)
		{
			if (field[i][j] == 0)
				printf("  ");
			if (field[i][j] == 1)
				printColoredText("бс", RED);
			if (field[i][j] == 2)
				printf("бс");
		}
		printf("\n");
	}
}