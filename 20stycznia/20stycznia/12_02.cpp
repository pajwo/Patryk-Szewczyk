#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct wezel
{
	int wartosc;          
	struct wezel *rodzic;  
	struct wezel *l_syn;   
	struct wezel *p_syn;   
};
struct wezel *root;

struct wezel* szukaj(struct wezel *start, int wartosc)
{
	
	if (start->wartosc == wartosc) return start;
	else if (wartosc < start->wartosc && start->l_syn != NULL) return szukaj(start->l_syn, wartosc);
	else if (wartosc > start->wartosc && start->p_syn != NULL) return szukaj(start->p_syn, wartosc);
	return NULL;
}


