#include <iostream>
using namespace std;

typedef int T;

struct Element
{
	Element*pNext;
	T dana;
};
Element*pNext;



int main()
{


	Element*dodaj(T w, Element*pH);
	{
		Element*pNowy = new Element;
		pNowy->dana = w;
		(*pNowy).dana;
		pNowy->pNext = pH;
		pH = pNowy;
		return pH;
	}


	void wypiszI(Element*pH);
	{
		while (pH)
		{
			cout << pH->dana;
			pH = pH->pNext;
		}

     }

	//na egzamin-wypisywanie listy od konca-najlepiej rekurencyjnie

	void wypiszREKURENCYJNIE(Element*pH);
	{
		if(pH)
		{
			cout << pH->dana;
			wypiszREKURENCYJNIE(pH->pNext);
		}
	}

	void usunREKURENCYJNIE_OD_KONCA(Element*pH);
	{
		if (pH) 
		{
			usunREKURENCYJNIE_OD_KONCA(pH->pNext);
			cerr << pH->dana; //nieobowiazkowo
			delete pH;
		}
	}

}