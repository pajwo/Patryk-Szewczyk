#include <iostream>
using namespace std;
int main()
{
	const int N = 10;
	double tab[N];
	for (int i = 0; i < N; i++)
	{

		tab[i] = (double)rand() / RAND_MAX;
		cout << tab[i] << endl;

	}
	cout << endl;
	for (int i = N-1; i >=0; i--)
	{
		cout << tab[i] << endl;
	}
	system("pause");
}
