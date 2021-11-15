// CSDrawTextSquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void draw_text_square(char symbol, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%c", symbol);
	}

	printf("%c", '\n');

	for (int i = 0; i < size - 2; ++i)
	{
		printf("%c", symbol);
		for (int i = 0; i < size - 2; ++i)
		{
			printf("%c", ' ');
		}
		printf("%c", symbol);
		printf("%c", '\n');
	}

	if(size > 1)
	{
		for (int i = 0; i < size; ++i)
		{
			printf("%c", symbol);
		}
	}
	printf("%c", '\n');
}

int main()
{
    draw_text_square('A', 0);
	printf("\n");
	draw_text_square('B', 1);
	printf("\n");
	draw_text_square('C', 2);
	printf("\n");
	draw_text_square('D', 3);
	printf("\n");
	draw_text_square('E', 4);
}