/*#include "Service.h"
#include <algorithm> 

Service::Service()
{
}

Service::Service(const RepositoryFile &r)
{
	repo = r;
}

void Service::setRepo(const RepositoryFile & r)
{
	repo = r;
}

vector<Student> Service::filterStudents(char * name, int age)
{
	vector<Student> studFilter;
	for (int i = 0; i < repo.size(); i++) {
		Student crtStudent = repo.elemAtPos(i);
		if ((strstr(crtStudent.getNume(), name)) && (crtStudent.getVarsta() >= age)) {
			studFilter.push_back(crtStudent);
		}
	}
	return studFilter;
}

void Service::addStudent(Student & s)
{
	repo.addElem(s);
}

int Service::delStudent(Student &s)
{
	return repo.delElem(s);
}

vector<Student> Service::getAll()
{
	return repo.getAll();
}

Student Service::update(Student s, char *n, int a)
{
	repo.updateElem(s, n, a);
	return s;
}

bool Service::findOne(Student s)
{
	return repo.findElem(s);
}
//sorteaza studentii alfabetic
vector<Student> Service::sortByName()
{
	vector<Student> all = repo.getAll();
	std::sort(all.begin(), all.end());
	return all;
}

bool myStudCompare(Student x, Student y) { return (x.getVarsta() > y.getVarsta()); }
//sorteaza descrescator dupa varsta
vector<Student> Service::sortByAge()
{
	vector<Student> all = repo.getAll();
	std::sort(all.begin(), all.end(), myStudCompare);
	return all;
}

vector<Student> Service::filterByNameAndAge(const char * n, int a)
{
	vector<Student> rez;
	for(int i=0;i<repo.size();i++)
	{
		Student crt = repo.elemAtPos(i);
		if (strstr(crt.getNume(), n) && crt.getVarsta() >= a)
			rez.push_back(crt);
	}
	return rez;
}



Service::~Service()
{
}
*/