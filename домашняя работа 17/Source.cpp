#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

//Задача 1
void sum(int n1, int n2, int n3, int n4, int n5) {
	cout << "Сумма чисел = " << n1 + n2 + n3 + n4 + n5 << endl;
}

//Задача 2
int posNum(int Arr[], int length) {
	for (int i = 0; i < length; i++) {
		if (Arr[i] < 0)
			Arr[i] *= (-1);
	}
	return Arr[length];
}

//Задача 3

void statNum(int num) {
	static int n = 10; 
		num*=n;
	cout << "Статичная переменная  * 10 = " << num << endl;
}



int main() {
	setlocale(LC_ALL, "Russian");


	//Задача 1
	cout << "Задача 1" << endl;
	sum(5, 10, 20, 50, 5);
	cout << endl << endl;

	//Задача 2
	int Arr[7] = { 1, -7, 3, -4, 5,-9, 8 };
	cout << "Задача 2\nПеревод элементов массива из отрицательных чисел в положительные:" << endl;
	posNum(Arr, 7);
	for (int i = 0; i < 7; i++)
		cout << Arr[i] << ", ";
	cout << "\b\b.\n\n";

	//Задача 3
	cout << "Задача 3\nВведите число: ";
	int num;
	cin >> num;
	statNum(num);
	for (int i = 0; i < 3; i++) {
		cout << "Введите число ещё раз: ";
		cin >> num;
		statNum(num);
	}
	cout << "Мы проверили работу статичной переменной." << endl << endl;



	return 0;
}