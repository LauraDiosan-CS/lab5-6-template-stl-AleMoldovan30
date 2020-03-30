/*#pragma once
#include "RepositoryFile.h"
#include "Magazin.h"
#include <vector>
using namespace std;

class Service
{
private:
	RepositoryFile repo;
public:
	Service();
	Service(const RepositoryFile&);
	void setRepo(const RepositoryFile&);
	vector<Student> filterStudents(char* name, int age);
	void addStudent(Student&);
	int delStudent(Student&);
	vector<Student> getAll();
	Student update(Student, char*, int);
	bool findOne(Student);
	vector<Student> sortByName();
	vector<Student> sortByAge();
	vector<Student> filterByNameAndAge(const char* n, int a);
	~Service();
};

*/