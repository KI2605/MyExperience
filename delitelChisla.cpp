//пользователь задает число, программа разбивает его на цифры и выводит их
#include <iostream>
using namespace std;
void delch(int ch) {
	int i=0;
	int el;
	int tmp = ch;
	while (tmp != 0) {
		el = tmp % 10;
		tmp = (tmp - el) / 10;
		i++;
	}
	while (ch != 0) {
		el = ch % 10;
		ch = (ch - el) / 10;
		cout << i << " element = " << el << endl;
		i--;
	}
}
void main() {
	int ch;
	cout << "enter number,please ";
	cin >> ch;
	delch(ch);
}
