#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>

using namespace std;

void main() {
	
	setlocale(LC_ALL, "Russian");
	int x;
	do {
		cout << "Номер задания (если хотите прекратить, то напишите 0)" << endl;
		cin >> x;
		if (x == 1) {
			int a;
			cout << "Введите число:" << endl;
			cin >> a;
			if (a % 2 != 0) {
				cout << "Число нечетное" << endl;
			}
			else {
				cout << "Число четное" << endl;
			}
		}

		if (x == 2) {
			int a;
			cout << "Введите число:" << endl;
			cin >> a;
			if (a % 2 == 0 || a % 3) {
				cout << "Нормально" << endl;
			}
			else {
				cout << "Фальшивка" << endl;
			}
		}
		if (x == 3) {
			int a, b;
			cout << "Введите 1 число:" << endl;
			cin >> a;
			cout << "Введите 2 число:" << endl;
			cin >> b;
			if (a % 2 != 0 && b % 2 != 0) {
				cout << "Нормально" << endl;
			}
			else {
				cout << "Фальшивка" << endl;
			}
		}
		if (x == 4) {
			cout << "Непонял что сделать надо, тупо прописать правда или ложь?" << endl;
		}
		if (x == 5) {
			int x;
			cout << "Введите число:" << endl;
			cin >> x;
			double one = 2 * tan(x);
			if (x != 1) {
				double two = 3 / (x - 1);
				cout << one << endl;
				cout << two << endl;
			}
			else {
				cout << one << endl;
				cout << "Фальшивка" << endl;
			}
		}
		if (x == 6) {
			cout << "Также как и 4" << endl;
		}
		if (x == 7) {
			int n;
			cout << "Введите число:" << endl;
			cin >> n;
			if (n >= 100 && n <= 999) {
				cout << "Число трехзначное" << endl;
			}
			else {
				cout << "Число не трехзначное" << endl;
			}
		}
		if (x == 8) {
			int a, b, c;
			cout << "Первое число:" << endl;
			cin >> a;
			cout << "Второе число:" << endl;
			cin >> b;
			cout << "Третье число:" << endl;
			cin >> c;
			if (a < 45 && b>45 && c > 45) {
				cout << "Нормально" << endl;
			}
			else if (a > 45 && b < 45 && c>45) {
				cout << "Нормально" << endl;
			}
			else if (a > 45 && b > 45 && c < 45) {
				cout << "Нормально" << endl;
			}
			else {
				cout << "Фальшивка" << endl;
			}
		}
		if (x == 9) {
			int x;
			cout << "Введите число" << endl;
			cin >> x;
			if(x%3!=0 && abs(x) % 10 == 0){
				cout << "Нормально" << endl;
			}
			
		}
		if (x == 10) {
			int a;
			cout << "Введите число" << endl;
			cin >> a;
			if ((-137) < a && (-51) > a) {
				cout << "Принадлежит промежутку от -137 до -51" << endl;
			}
			else if (a > 55 && a < 123) {
				cout << "Принадлежит промежутку от 55 до 123" << endl;
			}
			else {
				cout << "Фальшивка" << endl;
			}
		}
	} while (x != 0);
	
}