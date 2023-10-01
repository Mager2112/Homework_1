/*
   Copyright Mager 2023
   All rights reserved lmao
*/
#include <cmath>
#include <algorithm>
﻿#include <iostream>
///////1) Fibonacci
int Fibonacci(int a) // 1 1 2 3 5 8 13 21...
{
	if (a <= 2)
		return 1;
	else
	{
		int sum = 0;
		int f1 = 1;
		int f2 = 1;
		for (int i = 2; i < a; i++)
		{
			sum = f1 + f2;
			f1 = f2;
			f2 = sum;
		}
		return sum;
	}
}
///////2.2) Array int
int Array(int array[], int n) //Counting unique numbers
{
	int result = 0;
	std::sort(array, array + n);
	for (int i = 0; i < n; i++)
		if (array[i] != array[i + 1])
			result++;
	return result;
}
///////3) Factorial 1/1! + 1/2! + ...
double factorial(int n)
{
	if (n < 2)
		return 1;
	return n * factorial(n - 1);
}
double alg_fact(int n)
{
	double count = 0;
	for (int i = 0; i < n; i++)
		count += 1 / factorial(i);
	return count;
}
///////4) Array finding
int Array_find(int array[], int n) // finding missing number 1, 2, 3, 5, 6 result: 4
{
	int result = 0;
	std::sort(array, array + n);
	for (int i = 0; i < n; i++)
	{
		result++;
		if (array[i] < array[i + 1] - 1)
			break;
	}
	return result+1;
}
//////5) 2d Array finding
void Array_find_2d(int *array[], int rows, int colomns, int key) // finding number in 2d array
{
	int answer = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colomns; j++)
		{
			if (array[i][j] == key)
			{
				std::cout << "Yes it is there\n";
				answer+=1;
				break;
			}
		}
	}
	if (answer == 0)
		std::cout << "No, there is not\n";
}
///////6) Sudoku check
bool isinRange(int board[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] <= 0 || board[i][j] > 9)
				return false;
		}
	}
	return true;
}
bool isValidSudoku(int board[][N])
{
	// Check if all elements of board[][]
	// stores value in the range[1, 9]
	if (isinRange(board)
		== false) {
		return false;
	}

	// Stores unique value
	// from 1 to N
	bool unique[N + 1];

	// Traverse each row of
	// the given array
	for (int i = 0; i < N; i++) {

		// Initialize unique[]
		// array to false
		memset(unique, false,
			sizeof(unique));

		// Traverse each column
		// of current row
		for (int j = 0; j < N;
			j++) {

			// Stores the value
			// of board[i][j]
			int Z = board[i][j];

			// Check if current row
			// stores duplicate value
			if (unique[Z]) {
				return false;
			}
			unique[Z] = true;
		}
	}

	// Traverse each column of
	// the given array
	for (int i = 0; i < N; i++) {

		// Initialize unique[]
		// array to false
		memset(unique, false,
			sizeof(unique));

		// Traverse each row
		// of current column
		for (int j = 0; j < N;
			j++) {

			// Stores the value
			// of board[j][i]
			int Z = board[j][i];

			// Check if current column
			// stores duplicate value
			if (unique[Z]) {
				return false;
			}
			unique[Z] = true;
		}
	}

	// Traverse each block of
	// size 3 * 3 in board[][] array
	for (int i = 0; i < N - 2;
		i += 3) {

		// j stores first column of
		// each 3 * 3 block
		for (int j = 0; j < N - 2;
			j += 3) {

			// Initialize unique[]
			// array to false
			memset(unique, false,
				sizeof(unique));

			// Traverse current block
			for (int k = 0; k < 3;
				k++) {

				for (int l = 0; l < 3;
					l++) {

					// Stores row number
					// of current block
					int X = i + k;

					// Stores column number
					// of current block
					int Y = j + l;

					// Stores the value
					// of board[X][Y]
					int Z = board[X][Y];

					// Check if current block
					// stores duplicate value
					if (unique[Z]) {
						return false;
					}
					unique[Z] = true;
				}
			}
		}
	}

	// If all conditions satisfied
	return true;
}
///////7) Array new
void Array_new(int array[], int n) // answer[3] = array[1]*array[2] * xxx * array[4]
{
	int count = 1;
	int* answer = new int[n];
	for (int i = 0; i < n; i++)
		answer[i] = array[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			count *= array[j];
			if (j == i)
				count /= array[i];
		}
		answer[i] = count;
		count = 1;
	}
	for (int i = 0; i < n; i++)
		std::cout << answer[i]<< "\t";
}
int main()
{/*  
	//----------1--------
	int a;
	std::cin >> a;
	std::cout << Fibonacci(a);
	//----------2--------
	int n;
	std::cin >> n;
	int *dinamich_array = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> dinamich_array[i];
	std::cout <<"\n result: " << Array(dinamich_array, n);
	//---------3----------
        int n;
	std::cin >> n;
	std::cout << alg_fact(n);
        //---------4----------
        int n;
	std::cin >> n;
	int* dinamich_array = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> dinamich_array[i];
	std::cout << "\n result: " << Array_find(dinamich_array, n);
        //---------5----------
	int rows = 3;
	int cols = 3;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "enter number\n";
	int key;
	std::cin >> key;
	Array_find_2d(arr, rows, cols, key);
        //---------6----------
	int board[N][N]
		= { { 7, 9, 2, 1, 5, 4, 3, 8, 6 },
			{ 6, 4, 3, 8, 2, 7, 1, 5, 9 },
			{ 8, 5, 1, 3, 9, 6, 7, 2, 4 },
			{ 2, 6, 5, 9, 7, 3, 8, 4, 1 },
			{ 4, 8, 9, 5, 6, 1, 2, 7, 3 },
			{ 3, 1, 7, 4, 8, 2, 9, 6, 5 },
			{ 1, 3, 6, 7, 4, 8, 5, 9, 2 },
			{ 9, 7, 4, 2, 1, 5, 6, 3, 8 },
			{ 5, 2, 8, 6, 3, 9, 4, 1, 7 } };

	if (isValidSudoku(board)) {
		std::cout << "Valid";
	}
	else {
		std::cout << "Not Valid";
	}
        //---------7----------
	int n;
	std::cin >> n;
	int* dinamich_array = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> dinamich_array[i];
	Array_new(dinamich_array, n);
 */
}

