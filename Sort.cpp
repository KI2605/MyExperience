//программа сортирует массив по убыванию
#include<iostream>
using namespace std;
void Choice(int* mas, int l) {
	int j = 0;
	int t = 0;
	int v = 0;
	for (int j = l-1; j>=1; j--) {
		v = mas[j];
		t = j;
		for (int i = j-1; i>=0; i--) {
			if (mas[i] < v) {
				v = mas[i];
				t = i;
			}
		}
		int temp = mas[t];
		for (int i = t; i < j; i++) {
				mas[i] = mas[i + 1];
		}
		mas[j] = temp;
	}
		for (int i = 0; i < l; i++) {
			cout << mas[i] << "\t";
		}
}
void main() {
	int l = 0;
	cin >> l;
	int* mas = new int[l];
	for (int i = 0; i < l; i++) {
		mas[i] = rand() % 50 - 10;
	}
	for (int i = 0; i < l; i++) {
		cout << mas[i] << "\t";
	}
	cout << endl;
	Choice(mas, l);
}