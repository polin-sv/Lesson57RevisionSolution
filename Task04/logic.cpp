// Task 04 [The Sum of elements of columns with extreme elements]
// Сумма элементов столбцов с экстремальными элементами
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// высчитывает сумму элементов в тех столбцах заданной матрицы,
// которые содержат хотя бы один экстремальный элемент.
#include "logic.h"

int find_max(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {

	int max = matrix[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int find_min(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	int min = matrix[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
	}

	return min;
}

int sum_elements_of_columns_with_extreme_value(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	if (n <= 0 || m <= 0) {
		return -1;
	}

	int max = find_max(matrix, n, m);
	int min = find_min(matrix, n, m);
	int sum = 0;
	int current_sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			current_sum += matrix[i][j];
			if (matrix[i][j] == max
				|| matrix[i][j] == min) {
				sum += current_sum;
			}
			
		}
	}

	return sum;
}