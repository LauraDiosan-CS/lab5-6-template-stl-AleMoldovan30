#pragma once
#include "Magazine.h"
#include "Repo.h"
//#include "StudentBursier.h"
//#include <vector>
#include<set>
#include<fstream>
using namespace std;

template <typename T>
class RepoFile:
	public Repo<T>
{
	
	public:
		RepoFile();
		RepoFile(const char* fileName);
		~RepoFile();
		void insert(const char* fileName);
		//RepoFile(const char* fileName);
		//void loadFromFile(const char* fileName);
		
		//void addElem(Student);
		//void updateElem(Student, const char*, int);
		//int findElem(Student);
		//int delElem(Student);
		//Student elemAtPos(int);
		//set<T> get_all();
		//int get_len();
		//void saveToFile();
		
};

template <typename T>
RepoFile<T>::RepoFile()
{

}

template <typename T>
RepoFile<T>::~RepoFile()
{

}


template <typename T>
RepoFile<T>::RepoFile(const char* fileName)
{
	fis = fileName;
	ifstream f(fileName);
	string linie;
	char* nume = new char[10];
	double pret;
	int buc;
	while (!f.eof()) {
		f >> nume >> pret>> buc;
		if (nume != "") {
			Carte s(nume, pret, buc);
			elem.insert(s);
		}
	}
	delete[] nume;
	f.close();
}

template <typename T>
void RepoFile<T>::insert(const char* fileName)
{
	array.clear();
	fis = fileName;
	ifstream f(fileName);
	char* nume = new char[10];
	double pret;
	int buc;
	while (!f.eof()) 
	{
		f >> nume >> pret >> buc;
		if (strcmp(nume, "") != 0) {
			Carte s(nume, pret, buc);
			array.insert(s);
		}
	}
	delete[] nume;
	f.close();
}