#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
using namespace std; // ����������� ������������ ��� std
double sum(int n)
{
	double sum = 0.0; // ���������� ��������� ���������� sum ��� �������� �����, � ������������� �� �����
	int i; // ���������� ���������� ����� i
	for (i = 1; i <= n; i++) // ���� �� 1 �� n, ������� ��������� ����� ��������
		sum += 1.0 / (i * i - i + 1); // ����������� sum �� 1.0 / (i * i - i + 1) �� ������ ��������
	return sum; // ������� ����� ����� ���������� �����
}
void f4_11(int n)
{
	cout << "\nThe sum of the first " << n << " terms of the numerical series : " << sum(n) << endl; // ������� �������� ������� sum(n) �� ����� � ����� ������
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
	case 411: f4_11(a); break; // ���� ����� ����� 411, ���������� ������� f4_11 � ���������� a
	default: cout << "The task was not found";
		// ���� ����� �����, ������� �� ������������� �� ����� ������, ��������� ��������� �� ������
	}
	return 0; // ������� 0
}