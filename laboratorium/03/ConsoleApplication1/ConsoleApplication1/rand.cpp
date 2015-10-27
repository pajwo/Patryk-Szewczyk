#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	const int N = 10;
	double tab[N];
	for (int i = 0; i < N; i++)
	{

		tab[i] = 1.0*rand() / RAND_MAX;

	}

	for (int i = 0; i < N - 1; i++)
		for (int j = 0; j < N - 1; j++)
			if (tab[j]>tab[j + 1])
				swap(tab[j], tab[j + 1]);

	for (int i = 0; i < 10; i++)
		cout << tab[i] << endl;

	cout << endl;
	for (int i = N - 1; i >= 0; i--)
	{
		cout << tab[i] << endl;
	}
	system("pause");
}