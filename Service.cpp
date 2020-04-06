#include "Service.h"
#include "Magazine.h"
#include <cstring>
#include <set>
using namespace std;

void Service::insert_service(char* nume, double pret, int buc) 
{
	Carte shop(nume, pret, buc);
	repo.insert(shop);
}
/*
std::set<Carte> Service::get_all() 
{
	return this->repo.get_all();
}

int Service::get_len() 
{
	return this->repo.get_len();
}

void Service::updateS(char* nume, double pret, int buc, char* nume1, double pret1, int buc1)
{
	Carte s(nume, pret, buc);
	Carte s1(nume1, pret1, buc1);
	repo.updateS(s, s1);
}

void Service::delS(char* nume, double pret, int buc)
{
	Carte s(nume, pret, buc);
	repo.delS(s);
}
*/

