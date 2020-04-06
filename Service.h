#pragma once
#include "RepoFile.h"
#include <set>
using namespace std;
class Service {

	private:

		Repo<Carte> repo;

	public:
		Service() {}
		~Service() {}
		void insert_service(char*, double, int);
		//int get_len();
		//void updateS(Carte& s, char* nume, double pret, int buc);
		//void updateS(char* nume, double pret, int buc, char* nume1, double pret1, int buc1);
	    //void delS(char* nume, double pret, int buc);
		//std::set<Carte> get_all();
};