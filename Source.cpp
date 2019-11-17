#include<iostream>
#include<conio.h>
#include<ctime>
using std::endl;
using std::cin;
using std::cout;

void fill_rand(int arr[], const int n);
void print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};
	srand(time(NULL));
	fill_rand(arr, n);
	print(arr, n);
	int n_even = 0;
	int n_odd = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0) n_even++;
		else n_odd++;
	}
	int* Brr = new int[n_even];
	int* Crr = new int[n_odd];
	for (int i = 0,j = 0 , k=0; i < n; i++)
	{
			if (arr[i] % 2 == 0) Brr[j++] = arr[i];
			else Crr[k++] = arr[i];
	}
	cout << "Ёлементы нечЄтного массива: "; print(Crr, n_odd); cout << endl;
	cout << "Ёлементы чЄтного массива: "; print(Brr, n_even); cout << endl;

	delete[] Brr;
	delete[] Crr;
}

void fill_rand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
}
void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i]<<"\t";
	cout << endl;
}