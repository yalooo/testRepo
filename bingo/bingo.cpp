// bingo.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int max;

int main()
{
	int dal[50][50];
	int x = 0;
	int y = -1;
	int t = 1;
	int num;
	int count = 1;
	int jmax;

	printf(" N : ");
	scanf_s("%d", &num);
	max = num;
	jmax = max;

	while (0 < jmax)
	{
		for (int i = 0; i < jmax; i++)
		{
			y = y + t;
			dal[x][y] = count;
			count++;
		}
		jmax--;
		for (int i = 0; i < jmax; i++)
		{
			x = x + t;
			dal[x][y] = count;
			count++;
		}

		t = t * -1;
	}
	for (x = 0; x < max; x++)
	{
		for (y = 0; y < max; y++)
		{
			printf("%3d", dal[x][y]);
		}
		printf("\n");
	}
}
