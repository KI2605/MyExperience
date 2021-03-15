//удаление элемента по заданному номеру
#include<iostream>
using namespace std;
void del(int* ar, int s,int e) {
	int k = 0;
	for (int i = 0; i < s; i++) {
		ar[i] = rand() % 20 - 10;
	}
	for (int i = 0; i < s; i++) {
		cout << ar[i] << "\t";
	}
	cout << endl;
	int* arr = new int[s];
	for (int i = 0; i < s; i++) {
		if (i == (e-1)) {
			ar[i] = NULL;
		}
		if (ar[i] != NULL) {
			arr[k] = ar[i];
		k++;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << arr[i] << "\t";
	}
	delete[] ar;
	delete[] arr;
}
void main() {
	int s, e;
	cout << "input size of array" << endl;
	cin >> s;
	cout << "input element to delete" << endl;
	cin >> e;
	int* ar = new int[s];
	del(ar, s, e);
}
