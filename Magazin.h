#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	char* nume;
	int varsta;
	int buc;
public:
	Student();
	Student(const char*, int, int);
	Student(const Student&);
	Student(string);//constructor de conversie
	Student& operator=(const Student&);
	char* getNume();
	int getVarsta();
	int getBuc();
	void setNume(const char*);
	void setVarsta(int);
	void setBuc(int);
	bool operator==(const Student&);
	bool operator<(const Student&);
	~Student();
	friend ostream& operator<<(ostream& os, Student s);
	friend istream& operator>>(istream&, Student&);
};

