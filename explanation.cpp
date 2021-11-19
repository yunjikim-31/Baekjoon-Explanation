#include <iostream>
#include <cmath>
using namespace std;

// Ǯ�� ����: https://jaimemin.tistory.com/1627

const double PI = 3.14159265358979323846;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double A1 = 0, P1 = 0, R1 = 0, P2 = 0;
	cin >> A1 >> P1 >> R1 >> P2;

	double slicePizza = A1 / P1;
	double wholePizza = R1 * R1 * PI / P2;

	// ���� ���ڰ� ��ü ���ں��� �� ���ٸ�
	if (slicePizza > wholePizza)
		cout << "Slice of pizza" << endl;
	// ��ü ���ڰ� �� ���ٸ�
	else
		cout << "Whole pizza" << endl;

	return 0;
}