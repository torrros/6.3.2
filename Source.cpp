#include<iostream>
#include<iomanip>
#include<time.h>
#include<Windows.h>

using namespace std;

void Create(int* m, const int size, int i)
{
	cout << "m[" << i << "]=";
	cin >> m[i];
	if (i < size - 1)
		Create(m, size, i + 1);
	else
		cout << endl;
}

void Print(int* m,const int size,  int i)
{
	cout << setw(4) << m[i];
	if (i < size - 1)
		Print(m, size, i + 1);
	else
		cout << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "-¬вед≥ть елементи масиву" << endl;

	const int i = 6;
	int m[i];
	Create(m, i, 0);

	cout << "-¬аш масив" << endl;
	Print(m, i, 0);

	return 0;

}