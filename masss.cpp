//для двмерного массива вывести минимальное под 1-й диагонвлью и максимальное над второй
#include <iostream>
using namespace std;
void diag(int str,int col,int **ar) {
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			ar[i][j] = rand() % 100 + 1;
		}
	}
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
	int min = ar[1][0];
	for (int i = 0; i < str; i++) {
		for (int j = 0; j <col; j++) {
			if (j < i) {
				cout << ar[i][j] << "\t";
				if (ar[i][j] < min) {
					min = ar[i][j];
				}
			}
		}
		cout << endl;
	}
	int max = ar[0][0];
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col-1; j++) {
			if (ar[i][j] > max) {
				max = ar[i][j];
		 }
		}
		col--;
	}
	cout << "minimal under the diagonal is " << min << endl;
	cout << "maximal upon the second diagonal is " << max << endl;
}
void main() {
	int str, col;
	cin >> str;
	cin >> col;
	int** ar = new int* [str];
	for (int i = 0; i < str; i++) {
		ar[i] = new int[col];
	}
	diag(str, col, ar);
	for (int i = 0; i < str; i++) {
		delete[]ar[i];
	}
}