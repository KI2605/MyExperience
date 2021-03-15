//есть строка, в зависимости от выбора пользователя, преобразуем ее:
//в заглавные буквы,нижний регистр,с Заглавной Буквы,первый символ в нижнем регистре
#include <iostream>
#include <string.h>
using namespace std;
void ZaglBukv(char str[]) {
	int size = strlen(str);
	for (int i = 0; i < size; i++) {
		if (str[i] >='a'&&str[i]<='z') {
			str[i] = int(str[i]) - 32;
		}
		cout << str[i];
	}
	cout << endl;
}
void UsualBukv(char str[]) {
	int size = strlen(str);
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = int(str[i]) + 32;
		}
		cout << str[i];
	}
	cout << endl;
}
void ZaglSlov(char str[]) {
	int size = strlen(str);
	for (int i = 0; i < size; i++) {
		if (str[i]==' '&&str[i+1] >= 'a' && str[i+1] <= 'z') {
			str[i+1] = int(str[i+1]) - 32;
		}
		if (str[0] >= 'a' && str[0] <= 'z') {
			str[0] = int(str[0]) - 32;
		}
		cout << str[i];
	}
	cout << endl;
}
void neZaglSlov(char str[]) {
	int size = strlen(str);
	for (int i = 0; i < size; i++) {
		if (str[i] == ' ' && str[i + 1] >= 'A' && str[i + 1] <= 'Z') {
			str[i + 1] = int(str[i + 1]) + 32;
		}
		if (str[0] >= 'A' && str[0] <= 'Z') {
			str[0] = int(str[0]) + 32;
		}
		cout << str[i];
	}
	cout << endl;
}
void UsualSentence(char str[]) {
	int size = strlen(str);
	for (int i = 0; i < size; i++) {
		if (str[0] >= 'a' && str[0] <= 'z') {
			str[0] = int(str[0]) - 32;
		}
		cout << str[i];
	}
	cout << endl;
}
void main() {
	setlocale(LC_ALL, "rus");
	char str[] = {"We are the champions"};
	char l;
	cout << "Для преобразования строки в заглавные буквы нажмите : 1" << endl;
	cout << "Для преобразования строки в нижний регистр нфжмите : 2" << endl;
	cout << "Для преобразования строки с Заглавной Буквы нажмите : 3" << endl;
	cout << "Для преобразования строки в первый символ в нижнем регистре нажмите : 4" << endl;
	cout << "Для преобразования строки как в обычном предложении нажмите : 5" << endl;
	cout << "Для выхода нажмите : f" << endl;
	cout << endl;
	cout << "Введите необходимое действие : ";
	cin >> l;
	while (l!='f') {
		switch (l) {
		case '1': 
		{
			ZaglBukv(str);
		}
		case '2':
		{
			UsualBukv(str);
		}
		case '3':
		{
			ZaglSlov(str);
		}
		case '4':
		{
			neZaglSlov(str);
		}
		case '5':
		{
			UsualSentence(str);
		}
		}
		cout << "Для преобразования строки в заглавные буквы нажмите : 1" << endl;
		cout << "Для преобразования строки в нижний регистр нфжмите : 2" << endl;
		cout << "Для преобразования строки с Заглавной Буквы нажмите : 3" << endl;
		cout << "Для преобразования строки в первый символ в нижнем регистре нажмите : 4" << endl;
		cout << "Для преобразования строки как в обычном предложении нажмите : 5" << endl;
		cout << "Для выхода нажмите : f" << endl;
		cout << endl;
		cout << "Введите необходимое действие : ";
		cin >> l;
	}
}
