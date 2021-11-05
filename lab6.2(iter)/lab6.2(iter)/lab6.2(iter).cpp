// lab6.2(iter).cpp
// <Сташкевич Владислав>
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 19

#include <iostream>
#include <time.h>

using namespace std;

int* ArrayBuilder(int* a, int size);
int MaxOddElement(int* a, int size);
void PrintArray(int* a, int size);

int main() {
	srand((unsigned)time(NULL));

	int* a, n, index = -1;
	cout << "Enter n: "; cin >> n;

	a = new int[n];
	a = ArrayBuilder(a, n); 
	cout << "\nArray: ";
	PrintArray(a, n);

	index = MaxOddElement(a, n);
	if (index != -1)
		cout << "\nMax odd element: " << a[index] << endl;
	else
		cout << "\nThere is no odd element in array.\n";

	return 0;
}

int* ArrayBuilder(int* a, int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 2001 - 1000;
	}
	return a;
}

int MaxOddElement(int* a, int size) {
	int index = -1,
		max = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 1) {
			max = a[i];
			index = i;
			break;
		}
	}

	if (index != -1) {
		for (int i = 0; i < size; i++) {
			if (a[i] % 2 != 0 && a[i] > max) {
				max = a[i];
				index = i;
			}
		}
	}

	return index;
}

void PrintArray(int* a, int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}