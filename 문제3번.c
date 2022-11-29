//문제 3번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //rand(), srand()를 위한 헤더파일 포함
#include <time.h> //time()을 위한 헤더파일 포함

int main()
{
	srand((long) time(NULL)); 

	int A, B;

	printf("반 개수: ");
	scanf("%d", &A); //원하는 반 개수 입력

	int** Students = (int**)malloc(sizeof(int*) * A);

	printf("한반의 학생수: ");
	scanf("%d", &B); // 원하는 학생 수 입력

	for (int i = 0; i < A; ++i)// for문
		Students[i] = (int*)malloc(sizeof(int) * B);


	printf("\n임의로 부여된 숫자 출력");
	for (int i = 0; i < A; ++i)
	{
		printf("\n%d반\n", i + 1); //이중 for문
		for (int j = 0; j < B; ++j)
		{
			Students[i][j] = rand() % 1000 + 1;
			printf("%d ", Students[i][j]);
		}
	}

	printf("\n\n각 반의 평균\n각 반의 가장 큰 수\n");
	for (int i = 0; i < A; ++i)
	{
		int max = 0;
		double avg = 0;

		for (int j = 0; j < B; ++j)
		{
			avg += Students[i][j];

			if (max < Students[i][j])
				max = Students[i][j];
		}
		avg /= B;

		printf("\n%d반의 평균: %.02lf", i + 1, avg); // 입력한 반의 숫자에 맞게 가장 큰 수가 각각 나옴
		printf("\n%d반의 가장 큰 수: %d\n", i + 1, max); // 입력한 반의 숫자에 맞게 가장 큰 수가 각각 나옴
	}

	for (int i = 0; i < A; ++i)
		free(Students[i]);

	free(Students);

	return 0;
}