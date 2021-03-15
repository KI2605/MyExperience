//остаток от деления
#include<iostream>
using namespace std;
void ost(int num,int del) {
	int i = 0;
	int ost=0;
	if (num >= del) {
		while (num >= del) {
			num -= del;
			i++;
		}
		cout << "celoe " << i << " ostatok " << num;
	}
	else {
		cout << "I can't do this" << endl;
	}	
}
void main() {
	int num, del;
	cout << "input number" << endl;
	cin >> num;
	cout << "input delitel" << endl;
	cin >> del;
	ost(num, del);
}