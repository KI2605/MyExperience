#include <iostream>
#include <string.h>
using namespace std;
struct person {
    int age;
    char name[10];
};
void vvod() {
    person* p = new person[1];//������ ���������

    int var = 1; //����� ������� ����� ������������ (���������� ��� �����)
    int size = 1; //������ ������� ��������

    while (var)
    {
        if (size == 1)//������ ������ ������ � 0-� ��������
        {
            cout << "���: ";
            cin >> p[size - 1].name;
            cout << "�������: ";
            cin >> p[size - 1].age;
            cout << "�������� ��������� ������� �:  " << p[size - 1].name << "  " << p[size - 1].age << ";\n";
        }
        else//size > 1
        {
            person* copy = new person[size - 1];//������� ����� ��������� ��� ����������� � ��� ������

            for (int i = 0; i < size - 1; i++)//�������� ������ ����� ��������� ������ ������� �
            {
                strcpy_s(copy[i].name, p[i].name);
                copy[i].age = p[i].age;
            }

            delete[] p; //�����������  ������

            p = new person[size]; //�������� ����� ������

            for (int i = 0; i < size - 1; i++) // �������� ����������� � ������ �
            {
                strcpy_s(p[i].name, copy[i].name);
                p[i].age = copy[i].age;
            }

            delete[] copy; //����������� ������

            cout << "���: ";//���������� ����� ��������� ������
            cin >> p[size - 1].name;
            cout << "�������: ";
            cin >> p[size - 1].age;

            for (int i = 0; i < size; i++)//������� ��� ������  �� �����
            {
                cout << i << "-� �������� ��������� ������� �:  " << p[i].name << "  " << p[i].age << ";\n";
            }
        }

        size++;//������� +1

        cout << "\n������ ��� ������ - 1, ����� - 0: ";
        cin >> var;
        while (var != 0 && var != 1)//���� ������������ ���� �� 0 � �� 1
        {
            cout << "������ �����!\n";
            cout << "\n������ ��� ������ - 1, ����� - 0: ";
            cin >> var;
        }
    }

    delete[] p;//������������ ������ ����� ����������� ������ ���������
}
void main() {
    setlocale(LC_ALL, "rus");
    vvod();
    
}