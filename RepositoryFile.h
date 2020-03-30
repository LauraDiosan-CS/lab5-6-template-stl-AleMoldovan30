#pragma once
#include "Magazin.h"
#include <vector>
using namespace std;

class RepositoryFile
{
private:
	vector<Student> elem;
	const char* fis;
public:
	RepositoryFile();
	RepositoryFile(const char* fileName);
	void loadFromFile(const char* fileName);
	void addElem(Student);
	void updateElem(Student, const char*, int);
	int findElem(Student);
	int delElem(Student);
	Student elemAtPos(int);
	vector<Student> getAll();
	int size();
	void saveToFile();
	~RepositoryFile();
};


