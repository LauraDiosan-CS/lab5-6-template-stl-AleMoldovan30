#include "Student.h"
#include <string.h>
#include <sstream>
using namespace std;

Student::Student() {
	nume = NULL;
	varsta = 0;
}

Student::Student(const char* nume, int varsta) {
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
	this->varsta = varsta;
}

Student::Student(const Student& s) {
	this->nume = new char[strlen(s.nume) + 1];
	strcpy_s(this->nume, strlen(s.nume) + 1, s.nume);
	this->varsta = s.varsta;
}

Student::Student(string linie)
{
	std::istringstream iss(linie);
	string tok1, tok2;
	iss >> tok1 >> tok2;
	nume = new char[tok1.length() + 1];
	strcpy_s(nume, tok1.length() + 1, tok1.c_str());
	varsta = stoi(tok2);
}

int Student::getVarsta() {
	return varsta;
}

void Student::setVarsta(int v) {
	varsta = v;
}

char* Student::getNume() {
	return nume;
}


void Student::setNume(const char* n) {
	if (nume) delete[]nume;
	nume = new char[strlen(n) + 1];
	strcpy_s(nume, strlen(n) + 1, n);
}

Student::~Student() {
	if (nume) delete[]nume;
	nume = NULL;
	varsta = -1;
}

Student& Student::operator=(const Student& s) {
	if (this == &s) return *this; //self-assignment 

	if (nume) delete[] nume;
	nume = new char[strlen(s.nume) + 1];
	strcpy_s(nume, strlen(s.nume) + 1, s.nume);
	varsta = s.varsta;
	return *this;
}

bool Student::operator==(const Student& s) {
	return (strcmp(nume, s.nume) == 0) and (varsta == s.varsta);
}

bool Student::operator<(const Student & s)
{
	return (strcmp(nume, s.nume) < 0);

}

ostream& operator<<(ostream& os, Student s) {
	os << s.nume << " " << s.varsta << endl;
	return os;
}

istream & operator>>(istream &is, Student &s)
{
	cout << "Dati numele: ";
	char* nume = new char[10];
	is >> nume;
	cout << "Dati varsta: ";
	int v;
	cin >> v;
	s.setNume(nume);
	s.setVarsta(v);
	delete[] nume;
	return is;
}
