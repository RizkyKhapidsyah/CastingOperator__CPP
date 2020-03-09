#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int A = 5;
	float B = 8.34f;
	char C = 'R';

	cout << "Hasilnya adalah :" << endl;
	cout << A + (int)B << endl;
	cout << (char)(C + A) << endl;

	_getch();
	return 0;
}