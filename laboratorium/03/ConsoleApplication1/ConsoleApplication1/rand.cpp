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
	for (int i = 0; i < N/2; i++)
	{

		double dupa = tab[i];
		tab[i] = tab[N - i - 1];
		tab[N - i - 1] = dupa;
			cout << tab[i] << endl;
	}
	system("pause");
}