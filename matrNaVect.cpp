#include<iostream>
using namespace std;
void matrstat() {
	int m[2][4];
	int v[4];
	int p[2][4];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			m[i][j] = rand() % 20 - 10;
			cout << m[i][j]<<"\t";
		}
		cout << endl; 
	}
	cout << endl;
	for (int k = 0; k < 4; k++) {
		v[k] = rand() % 10;
		cout << v[k] <<"\t";
	}
	cout << endl << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			p[i][j] = m[i][j] * v[j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
}
void dynmatr() {
	int* v = new int[4];
	for (int k = 0; k < 4; k++) {
		v[k] = rand() % 10 - 5;
	}
	//выделение памяти и создание двумерного динамического массива
	int **m = new int*[2];

	for (int i = 0; i < 2; i++) {
		m[i] = new int[4];
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			m[i][j] = rand() % 20 - 10;
		}
	}
	//результирующий массив
	int** res = new int* [2];
	for (int i = 0; i < 2; i++) {
		res[i] = new int[4];
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			res[i][j] = m[i][j] * v[j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << res[i][j] << "\t";
		}
		cout << endl;
	}
	//удаление его из памяти
	/*
	for (int i = 0; i < 2; i++) {
		delete[] m[i];
	}
	delete[]m;
	*/
	}
void main() {
	//matrstat();
	dynmatr();
}