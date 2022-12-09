#include <iostream>
#include <time.h>

using namespace std;

void Generate(int* a, const int n, int low, int high)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = low + rand() % (high - low + 1);
	}
}

void print(int* a, const int n)
{
	cout << "a[] = { ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "}" << endl;
}

int SumKv(int* a, const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i] * a[i];
	return sum;
}

template <typename T>
void GenerateT(T* a, const int n, int low, int high)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = low + rand() % (high - low + 1);
	}
}

template <typename T>
void printT(T* arr, const int n)
{
	cout << "arr[] = { ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}" << endl;
}

template <typename T>
T SumKvT(T* arr, const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i] * arr[i];
	return sum;
}

int main()
{
	srand(time(NULL));
	int n;
	int high = 50;
	int low = 0;
	cout << "Insert n:" << endl;
	cout << "n = "; cin >> n;

	
	int* a = new int[n];
	double* r = new double[n];

	Generate(a, n, low, high);
	print(a, n);
	cout << "Sum of the elements = " << SumKv(a, n) << endl;

	GenerateT(r, n, low, high);
	printT(r, n);
	cout << "Sum of the elements = " << SumKvT(r, n) << endl;

	delete[] a;
	delete[] r;

	system("pause");
	return 0;
}