
#include <iostream>
#include <algorithm>
using namespace std;


int fibonacci(int num) {
	
	int *f = new int[num];

	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= num; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[num];
}

int coin(int* c, int size) {

	int* f = new int[size];

	f[0] = 0;
	f[1] = c[1];

	for (int i = 2; i <= size; i++)
	{
		f[i] = max(c[i] + f[i - 2], f[i - 1]);
	}
	return f[size];
}

//int bino(int n, int k) {
//
//	int** f = new int[n][10];
//
//	if (k == 0 || k == n)
//	{
//		return 1;
//	}
//	else
//
//}

int main()
{
	cout << "the fibonacci of 9 is " << fibonacci(9) << endl;

	int c[] = { 0,5,1,2,10,6,2 };
	cout << "the first coin-row problem answer is " << coin(c, 7) << endl;
	
}
