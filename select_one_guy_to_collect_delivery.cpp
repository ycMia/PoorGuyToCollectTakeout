#include <cstdlib>
#include <iostream>
#include <ctime>

int main(void)
{
	//-- import namespace
	using namespace std;

	//-- variables
	int a[4] = { 0 };
	// int hCount = 0;

	//-- hash
	srand((int)time(nullptr));
	for (int i = 0; i < 1; i++)
		a[rand() % 4]++;

	//-- output
	cout << "Jerry: " << a[0] << '\n';
	cout << "Haris: " << a[1] << '\n';
	cout << "Steven: " << a[2] << '\n';
	cout << "William: " << a[3] << '\n';
	return 0;
}
