/*#include "TestService.h"
#include <assert.h>

void TestService::testSortByName()
{
	RepositoryFile repo;
	repo.loadFromFile("TestStud.txt");
	Service serv;
	serv.setRepo(repo);
	vector<Student> rez = serv.sortByName();
	assert(rez[0] == Student("Ana", 19));
}

void TestService::testSortByAge()
{
	RepositoryFile repo;
	repo.loadFromFile("TestStud.txt");
	Service serv;
	serv.setRepo(repo);
	vector<Student> rez = serv.sortByAge();
	assert(rez[0] == Student("Florin", 24));
}


void TestService::testFilterStudents()
{
	RepositoryFile repo;
	repo.loadFromFile("TestStud.txt");
	Service serv;
	serv.setRepo(repo);
	vector<Student> rez = serv.filterByNameAndAge("a", 20);
	assert(rez[0] == Student("Mary", 20) && rez[1] == Student("Elena", 22)&&rez.size()==2);
}

TestService::TestService()
{
}

void TestService::runTests()
{
	testSortByName();
	testSortByAge();
	testFilterStudents();
}

TestService::~TestService()
{
}*/
