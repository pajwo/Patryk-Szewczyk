/*Drzewa poszukiwañ binarnych*/

#include <iostream>
using namespace std;

struct Node
{
	Node*pLewy*pPrawy;
	T dana;
};

int main()
{
	void dodajRek(Node*&pk, T d)
	{
		if (pk == NULL)
		{
			pk = new Node;
			pk->pPrawy = pk->pLewy = 0;
			pk->dana = d;
			return;
		}
		if (pk->dana < d)
			dodajRek(pk->pPrawy, d);
		else
			dodajRek(pk->pLewy, d);

	}

	void wypisz(Node*pk)
	{
		if (pk)
		{
			wypisz(pk->pLewy);
			cout << pk->dana;
			wypisz(pk->pPrawy);
		}
	}

	void usun(Node*&pk)
	{
		if (pk)
		{
			usun(pk->pLewy);
			usun(pk->pPrawy);
			delete pk;
		}
	}

}