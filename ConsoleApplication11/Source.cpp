#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>

using namespace std;

void main() {
	
	setlocale(LC_ALL, "Russian");
	int x;
	do {
		cout << "����� ������� (���� ������ ����������, �� �������� 0)" << endl;
		cin >> x;
		if (x == 1) {
			int a;
			cout << "������� �����:" << endl;
			cin >> a;
			if (a % 2 != 0) {
				cout << "����� ��������" << endl;
			}
			else {
				cout << "����� ������" << endl;
			}
		}

		if (x == 2) {
			int a;
			cout << "������� �����:" << endl;
			cin >> a;
			if (a % 2 == 0 || a % 3) {
				cout << "���������" << endl;
			}
			else {
				cout << "���������" << endl;
			}
		}
		if (x == 3) {
			int a, b;
			cout << "������� 1 �����:" << endl;
			cin >> a;
			cout << "������� 2 �����:" << endl;
			cin >> b;
			if (a % 2 != 0 && b % 2 != 0) {
				cout << "���������" << endl;
			}
			else {
				cout << "���������" << endl;
			}
		}
		if (x == 4) {
			cout << "������� ��� ������� ����, ���� ��������� ������ ��� ����?" << endl;
		}
		if (x == 5) {
			int x;
			cout << "������� �����:" << endl;
			cin >> x;
			double one = 2 * tan(x);
			if (x != 1) {
				double two = 3 / (x - 1);
				cout << one << endl;
				cout << two << endl;
			}
			else {
				cout << one << endl;
				cout << "���������" << endl;
			}
		}
		if (x == 6) {
			cout << "����� ��� � 4" << endl;
		}
		if (x == 7) {
			int n;
			cout << "������� �����:" << endl;
			cin >> n;
			if (n >= 100 && n <= 999) {
				cout << "����� �����������" << endl;
			}
			else {
				cout << "����� �� �����������" << endl;
			}
		}
		if (x == 8) {
			int a, b, c;
			cout << "������ �����:" << endl;
			cin >> a;
			cout << "������ �����:" << endl;
			cin >> b;
			cout << "������ �����:" << endl;
			cin >> c;
			if (a < 45 && b>45 && c > 45) {
				cout << "���������" << endl;
			}
			else if (a > 45 && b < 45 && c>45) {
				cout << "���������" << endl;
			}
			else if (a > 45 && b > 45 && c < 45) {
				cout << "���������" << endl;
			}
			else {
				cout << "���������" << endl;
			}
		}
		if (x == 9) {
			int x;
			cout << "������� �����" << endl;
			cin >> x;
			if(x%3!=0 && abs(x) % 10 == 0){
				cout << "���������" << endl;
			}
			
		}
		if (x == 10) {
			int a;
			cout << "������� �����" << endl;
			cin >> a;
			if ((-137) < a && (-51) > a) {
				cout << "����������� ���������� �� -137 �� -51" << endl;
			}
			else if (a > 55 && a < 123) {
				cout << "����������� ���������� �� 55 �� 123" << endl;
			}
			else {
				cout << "���������" << endl;
			}
		}
	} while (x != 0);
	
}