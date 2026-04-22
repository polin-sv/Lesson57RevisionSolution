// Task 02 [The sum of elements]
// Сумма элементов 
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.

#include "logic.h"


int sum_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

int sum_addition_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][n - 1 - i];
	}

	return sum;
}

int sum_main_and_second_diagonales_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	if (n <= 0) {
		return -1;
	}

	int mid = 0;
	int result = sum_main_elements(matrix, n) + sum_addition_elements(matrix, n);

	if (n % 2 == 1) {
		mid = n / 2;
		result -= matrix[mid][mid];
	}

	return result;
}