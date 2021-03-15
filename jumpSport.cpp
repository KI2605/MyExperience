//есть 5 спортсменов, у каждого из них по 3 прыжка, вывести всех спортсменов и их попытки, вывести лучший прыжок для кадого спротсмена
#include <iostream>
using namespace std;
void jump() {
	int** ar = new int*[5];
	for (int i = 0; i < 5; i++) {
		ar[i] = new int[3];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			ar[i][j] =rand() % 10;
		}
	}
	int max[5];
	int num[5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			max[0] = ar[i][j];
			if (ar[i][j] > max[i]) {
				max[i] = ar[i][j];
				num[i] = j;
		}
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "для " << i+1 << "спортсмена" << ar[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
			cout << "номер спортсмена=" << i+1 << "\t";
			cout << "номер попытки" << num[i]+1 << endl;
		
	}
}
void main() {
	setlocale(LC_ALL, "rus");
	jump();
}
