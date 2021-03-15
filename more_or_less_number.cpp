/* Организовать ввод двухзначного натурального числа с клавиатуры.
Программа должна определить наименьшую и наибольшую цифры, 
которые входят в состав данного натурального числа.*/

#include<iostream>
using namespace std;

void num(int ch) {
	int cb = ch % 10;
	int cm = ch % 10;
	if (ch>=10) {
		while (ch != 0) {			
			if (ch % 10 >= cb)
				cb = ch % 10;
			if (ch % 10 <= cm)
				cm = ch % 10;
			ch = (ch - ch % 10) / 10;
		}
		cout << "большая цифра= " << cb << endl;
		cout << "меньшая цифра= " << cm << endl;
	}
	else {
		cout << "маловато";
	}
}
void main() {
	setlocale(LC_ALL, "Russian");
	int ch;
	cin >> ch;
	num(ch);
}