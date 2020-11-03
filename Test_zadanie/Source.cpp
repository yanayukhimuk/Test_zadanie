#include <iostream> 
#include <Windows.h> 
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

void main() {
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 

	string* MassivStrok;
	int count;
	char buf[80]; 
	int j = 0; 

	cout << "���������� ����� � ������� = ";
	cin >> count;

	if (count <= 0) // ��������
	{
		cout << "�������� ���������� ���������";
		return;
	}

	MassivStrok = new string[count];
 
	cout << "������� ������:\n";
	cin.ignore(4096, '\n');

	for (int i = 0; i < count; i++)
	{
		cout << "=> ";
		cin.getline(buf, 80, '\n');
		MassivStrok[i] = buf; // ����������� ������
	}
	cout << "\n����� ���������� ������� ��� ��������:" << ::endl;
	for (int i = 0; i < count; i++)
		cout << "A[" << i << "] = " << MassivStrok[i] << ::endl;

	sort(MassivStrok, MassivStrok + count);  // ����������
	for (int i = 0; i < count; ++i) {
		cout << "������ ����� ����������: "<< MassivStrok[i] << " ";
	}
}