//самое длинное слово в строке
#include <iostream>
#include <string.h>
using namespace std;
void maxWord(char s[1000]) {
	int max = 0;
	int size = 0;
	int num;
	for (int i = 0; i <strlen(s) ; i++) {
		while (!isspace(s[i])) {
			size++;
		}
		if (max > size) {
			max = size;
			num = i;
		}
		size = 0;
}
	cout << "the longest word is under the number " << num << endl;
}
void main() {
	char s[1000];
	int i = 0;
	while (s[i] != '.') {
		cin >> s;
		i++;
	}
	maxWord(s);
}
