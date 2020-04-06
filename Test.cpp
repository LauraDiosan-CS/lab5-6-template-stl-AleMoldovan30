#include "Service.h"
#include "Repo.h"
#include <cassert>

void tests() {

	char* nume = new char[20];
	double pret;
	int buc;

	char* nume1 = new char[20];
	double pret1;
	int buc1;

	Repo<Carte> repo;

	strcpy_s(nume, sizeof "Paine", "Paine");
	pret = 3;
	buc = 100;

	strcpy_s(nume1, sizeof "Cana", "Cana");
	pret1 = 23;
	buc1=10;

	Carte carte(nume, pret, buc), carte1(nume1, pret1, buc1);
	//Carte array[3];
	//array[0] = carte;
	//array[1] = carte1;

	repo.insert(carte);
	assert(repo.get_len() == 1);
	repo.insert(carte1);
	assert(repo.get_len() == 2);

	repo.delS(carte);
	assert(repo.get_len() == 1);

	char* nume2 = new char[20];
	double pret2;
	int buc2;
	strcpy_s(nume2, sizeof "Paine", "Paine");
	pret2 = 3;
	buc2 = 100;
	
	Carte carte2(nume2, pret2, buc2);
	repo.updateS(carte1, carte2);
	assert(repo.get_len() == 1);

	
	/*for (int i = 0; i < repo.get_len(); i++) {
		assert(array[i] == repo.get_all()[i]);
	}*/

}