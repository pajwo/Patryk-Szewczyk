#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

struct wezel
{
	int wartosc=9;
	struct wezel *tata;
	struct wezel *l_syn;
	struct wezel *p_syn;
};
struct wezel *root;

struct wezel* szukaj(struct wezel *start, int wartosc)
{
    if (start->wartosc == wartosc) return start;
	else if (wartosc < start->wartosc && start->l_syn != NULL) return szukaj(start->l_syn, wartosc);
	else if (wartosc > start->wartosc && start->p_syn != NULL) return szukaj(start->p_syn, wartosc);
	else
	{
		return NULL;
	}
}

void wypisz(wezel*tata)
{
	if (tata)
	{
		wypisz(tata->l_syn);
		cout << tata->wartosc;
		wypisz(tata->p_syn);
	}
}


int main()
{
	wypisz;
	system("pause");
}