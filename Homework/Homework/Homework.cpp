#include <iostream>
#include <cmath>
//1) Fibonacci
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
int main()
{
	int a;
	std::cin >> a;
    std::cout << Fibonacci(a);
}

