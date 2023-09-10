#include <iostream>
#include <cmath>
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
		std::cout << array[i] << " ";
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
 */
}

