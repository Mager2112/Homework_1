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
void Sudoku_prototype(int array[], int n)
{

	
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
        //---------7----------
	int n;
	std::cin >> n;
	int* dinamich_array = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> dinamich_array[i];
	Array_new(dinamich_array, n);
 */
}

