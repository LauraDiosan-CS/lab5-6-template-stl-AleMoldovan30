#include "RepositoryFile.h"
#include <fstream>
#include <string>
using namespace std;


RepositoryFile::RepositoryFile()
{

}

RepositoryFile::RepositoryFile(const char* fileName)
{
	fis = fileName;
	ifstream f(fileName);
	string linie;
	char* nume = new char[10];
	int varsta;
	while (!f.eof()) {
		f >> nume >> varsta;
		if (nume != "") {
			Student s(nume, varsta);
			elem.push_back(s);
		}
	}
	delete[] nume;
	f.close();
}

void RepositoryFile::loadFromFile(const char * fileName)
{
	elem.clear();
	fis = fileName;
	ifstream f(fileName);
	char* nume = new char[10];
	int varsta;
	while (!f.eof()) {
		f >> nume >> varsta;
		if (strcmp(nume, "") != 0) {
			Student s(nume, varsta);
			elem.push_back(s);
		}
	}
	delete[] nume;
	f.close();
}

void RepositoryFile::addElem(Student s)
{
	elem.push_back(s);
}

void RepositoryFile::updateElem(Student s, const char * newName, int newAge)
{
	vector<Student>::iterator it;
	it = find(elem.begin(), elem.end(), s);
	if (it != elem.end()) {
		(*it).setNume(newName);
		(*it).setVarsta(newAge);
	}

}

//returneaza pozitia la care se gaseste studentul s, sau -1, daca acesta nu apare
int RepositoryFile::findElem(Student s)
{
	vector<Student>::iterator it;
	it = find(elem.begin(), elem.end(), s);
	if (it != elem.end()) {
		return distance(elem.begin(), it);
	}
	return -1;
}

//sterge elementul s din repository, returneaza 0 la succes, -1 altfel
int RepositoryFile::delElem(Student s)
{
	vector<Student>::iterator it;
	it = find(elem.begin(), elem.end(), s);
	if (it != elem.end()) {
		elem.erase(it); 
		return 0;
	}
	return -1;

}

Student RepositoryFile::elemAtPos(int i)
{
	if (i < 0 or i >= elem.size()) return Student("", -1);
	return elem[i];
}

vector<Student> RepositoryFile::getAll()
{
	return elem;
}

int RepositoryFile::size()
{
	return elem.size();
}

void RepositoryFile::saveToFile()
{
	ofstream f(fis);
	for (size_t i = 0; i < elem.size(); i++) {
		f << elem[i];
	}
	f.close();
}


RepositoryFile::~RepositoryFile()
{
	
}

