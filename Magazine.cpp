#include "Magazine.h"
#include <cstring>
#include<iostream>
using namespace std;
Carte::Carte() 
{
	this->nume = NULL;
	this->pret = NULL;
	this->buc = NULL;
}

Carte::Carte(char* nume, double pret, int buc)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume),nume);
	this->pret = pret;
	this->buc = buc;
}

Carte::Carte(const Carte& expence) 
{
	this->nume = new char[strlen(expence.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(expence.nume), expence.nume);
	this->pret = expence.pret;
	this->buc = expence.buc;
}

Carte::~Carte() 
{
	if (this->nume) 
	{
		free(this->nume);
		this->nume = NULL;
	}
}

//Getters

char* Carte::get_nume()
{
	return this->nume;
}

double Carte::get_pret()
{
	return this->pret;
}

int Carte::get_buc() 
{
	return this->buc;
}

//Setters

void Carte::set_nume(char* new_nume) 
{
	if (this->nume)
	{
		delete[] this->nume;
		this->nume = NULL;
	}
	this->nume = new char[strlen(new_nume) + 1];
	strcpy_s(this->nume, 1 + strlen(new_nume), new_nume);
}

void Carte::set_pret(double new_pret) 
{
	this->pret = new_pret;
}

void Carte::set_buc(int new_buc) 
{
	this->buc = new_buc;
}

Carte& Carte:: operator =(const Carte& expence) 
{
	this->set_nume(expence.nume);
	this->set_pret(expence.pret);
	this->set_buc(expence.buc);
	return *this;
}

/*bool Carte:: operator==(const Carte& s) {
	return strcmp(this->nume, s.nume) == 0 && this->pret == s.pret && this->buc == s.buc;
}*/
bool Carte::operator==(const Carte& s) const
{
	return (strcmp(nume, s.nume) == 0);
}

bool Carte::operator!=(const Carte& s) const
{
	return (strcmp(nume, s.nume) != 0);
}

bool Carte::operator<(const Carte& s) const
{
	return (strcmp(nume, s.nume) == -1);
}

bool Carte::operator<=(const Carte& s) const
{
	return ((strcmp(nume, s.nume) == 0) || (strcmp(nume, s.nume) == -1));
}

bool Carte::operator>(const Carte& s) const
{
	return (strcmp(nume, s.nume) == 1);
}

bool Carte::operator>=(const Carte& s) const
{
	return ((strcmp(nume, s.nume) == 0) || (strcmp(nume, s.nume) == 1));
}

std::ostream& operator <<(std::ostream& os, Carte expence) 
{
	os << std::endl << "Nume: " << expence.nume << " Pret: " << expence.pret << " Numar exemplare: " << expence.buc << std::endl;
	return os;
}

std::istream& operator >>(std::istream& is, Carte& s) 
{
	cout << "Introduceti nume produs: ";
	char* nume = new char[20];
	is >> nume;
	cout << "Introduceti pret produs: ";
	double pret;
	is >> pret;
	cout << "introduceti cantitate: ";
	int buc;
	is >> buc;
	s.set_nume(nume);
	s.set_pret(pret);
	s.set_buc(buc);
	delete[] nume;
	return is;
}