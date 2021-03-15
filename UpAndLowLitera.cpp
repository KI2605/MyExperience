#include <iostream>
using namespace std;
void Up() {
	char l('a');
	cin >> l;
	l = l - 32;
	cout << l << endl;
}
void Low() {
	char l('A');
	cin >> l;
	l = l + 32;
	cout << l << endl;
}
void main() {
	Up();
	Low();
}