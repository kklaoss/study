#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
using namespace std; // ����������� ������������ ��� std
void f2_2(float K, float L, float N)
{
	if (K > L && K > N) cout << " " << endl << "Serial number of the largest number: " << 1 << endl;
	// ��������, �������� �� K ���������� ������ ����� K, L � N
	// ���� ��, �������, ��� ��� ������ �����
	if (L > K && L > N) cout << " " << endl << "Serial number of the largest number: " << 2 << endl;
	// ��������, �������� �� L ���������� ������ ����� K, L � N
	// ���� ��, �������, ��� ��� ������ �����
	if (N > K && N > L) cout << " " << endl << "Serial number of the largest number: " << 3 << endl;
	// ��������, �������� �� N ���������� ������ ����� K, L � N
	// ���� ��, �������, ��� ��� ������ �����
	if (K < L && K < N) cout << " " << endl << "Serial number of the smallest number: " << 1;
	// ��������, �������� �� K ���������� ������ ����� K, L � N
	// ���� ��, �������, ��� ��� ������ �����
	if (L < K && L < N) cout << " " << endl << "Serial number of the smallest number: " << 2;
	// ��������, �������� �� L ���������� ������ ����� K, L � N
	// ���� ��, �������, ��� ��� ������ �����
	if (N < K && N < L) cout << " " << endl << "Serial number of the smallest number: " << 3;
	// ��������, �������� �� N ���������� ������ ����� K, L � N
	// ���� ��, �������, ��� ��� ������ �����
}
int main() // ������ �������� ������� ���������
{
	float a, b, c, d; // ���������� ���������� ��� �������� ��������
	cout << "Enter the variables:" << endl << " " << endl;  // ����� ��������� ��� ������������
	cout << "Variable 1 - "; cin >> a; // ������ ����� ������ ����������
	cout << "Variable 2 - "; cin >> b; // ������ ����� ������ ����������
	cout << "Variable 3 - "; cin >> c; // ������ ����� ������� ����������
	cout << "Variable 4 - "; cin >> d; // ������ ����� ��������� ����������
	int nomer; // ���������� ���������� ��� �������� ������ ������
	cout << " " << endl << "Specify the task number: "; cin >> nomer; // ������ ����� ������ ������ �� ������������
	switch (nomer) // ������������� ��������� switch ��� ������ ������ �� ������
	{
	case 22: f2_2(a, b, c); break; // ���� ����� ����� 22, ���������� ������� f2_2 � ����������� a, b, c
	default: cout << "The task was not found";
		// ���� ����� �����, ������� �� ������������� �� ����� ������, ��������� ��������� �� ������
	}
	return 0; // ������� 0
}