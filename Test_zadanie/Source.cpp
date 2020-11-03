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

	cout << "Количество строк в массиве = ";
	cin >> count;

	if (count <= 0) // проверка
	{
		cout << "Неверное количество элементов";
		return;
	}

	MassivStrok = new string[count];
 
	cout << "Введите строки:\n";
	cin.ignore(4096, '\n');

	for (int i = 0; i < count; i++)
	{
		cout << "=> ";
		cin.getline(buf, 80, '\n');
		MassivStrok[i] = buf; // скопировать строку
	}
	cout << "\nВывод введенного массива для проверки:" << ::endl;
	for (int i = 0; i < count; i++)
		cout << "A[" << i << "] = " << MassivStrok[i] << ::endl;

	sort(MassivStrok, MassivStrok + count);  // сортировка
	for (int i = 0; i < count; ++i) {
		cout << "Строки после сортировки: "<< MassivStrok[i] << " ";
	}
}