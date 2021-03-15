//сумма столбцов матрицы
#include <iostream>
using namespace std;
void summ(int** ar, int str, int col) {
	int i = 0, j = 0, sum = 0;
	int* mas = new int[col];
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			ar[i][j] = rand() % 20;
		}
	}
	for (int j = 0; j < col; j++)
		mas[j] = 0;
	cout << endl;
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
	for (int j = 0; j < col; j++) {
	     for (int i = 0; i < str; i++)
			if (ar[i][j] >= 0) {
				sum += ar[i][j];
			}
			else {
				mas[j] = 0;
				break;
			}
		mas[j] = sum;
		sum = 0;
		}
	for (int i = 0; i < col; i++) {
		cout << mas[i] << "\t";
	}
	delete[] mas;
}
void main() {
	int i = 0, j = 0;
	int str, col;
	cout << "vvedite colichestvo strok" << endl;
	cin >> str;
	cout << "vvedite colichestvo colonok" << endl;
	cin>>col;
	int** ar = new int* [str];
	for (int i = 0; i < str; i++) {
		ar[i] = new int[col];
	}
	summ(ar, str, col);
	for (int count = 0; count < str; count++)
		delete[]ar[count];
	}