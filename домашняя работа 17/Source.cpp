#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

//������ 1
void sum(int n1, int n2, int n3, int n4, int n5) {
	cout << "����� ����� = " << n1 + n2 + n3 + n4 + n5 << endl;
}

//������ 2
int posNum(int Arr[], int length) {
	for (int i = 0; i < length; i++) {
		if (Arr[i] < 0)
			Arr[i] *= (-1);
	}
	return Arr[length];
}

//������ 3

void statNum(int num) {
	static int n = 10; 
		num*=n;
	cout << "��������� ����������  * 10 = " << num << endl;
}



int main() {
	setlocale(LC_ALL, "Russian");


	//������ 1
	cout << "������ 1" << endl;
	sum(5, 10, 20, 50, 5);
	cout << endl << endl;

	//������ 2
	int Arr[7] = { 1, -7, 3, -4, 5,-9, 8 };
	cout << "������ 2\n������� ��������� ������� �� ������������� ����� � �������������:" << endl;
	posNum(Arr, 7);
	for (int i = 0; i < 7; i++)
		cout << Arr[i] << ", ";
	cout << "\b\b.\n\n";

	//������ 3
	cout << "������ 3\n������� �����: ";
	int num;
	cin >> num;
	statNum(num);
	for (int i = 0; i < 3; i++) {
		cout << "������� ����� ��� ���: ";
		cin >> num;
		statNum(num);
	}
	cout << "�� ��������� ������ ��������� ����������." << endl << endl;



	return 0;
}