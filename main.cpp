#include <iostream>
using namespace std;

double f1(double x, double y) { return x + y; }
double f2(double x, double y) { return x - y; }
double f3(double x, double y) { return x * y; }
double f4(double x, double y) { return x / y; }

int main() {
	unsigned short choose = 0;
	double x = 0.0, y=0.0;
	cout << "�����빤��ѡ��" << endl
		 << "1��" << endl
	 	 << "2��" << endl
	 	 << "3��" << endl
		 << "4��" << endl;
	cin >> choose;
	cout << "�����������������������\n";
	cin >> x;
	cin >> y;
	switch (choose) {
	case 1:
		cout << f1(x, y) << endl;
	case 2:
		cout << f2(x, y) << endl;
	case 3:
		cout << f3(x, y) << endl;
	case 4:
		cout << f4(x, y) << endl; }
}