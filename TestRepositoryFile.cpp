#include "TestRepositoryFile.h"
#include <assert.h> 



TestRepositoryFile::TestRepositoryFile()
{
	
	assert(repo.size() == 0);
}

void TestRepositoryFile::testLoadFromFile()
{
	repo.loadFromFile("TestStud.txt");
	assert(repo.size() == 4);
}

void TestRepositoryFile::testAddElem()
{
	repo.loadFromFile("TestStud.txt");
	repo.addElem(Student("Paine", 19, 5));
	assert(repo.size() == 5);
	repo.saveToFile();
}

void TestRepositoryFile::testFindElem()
{
	repo.loadFromFile("TestStud.txt");
	assert(repo.findElem(Student("Cutit", 19, 5)) == 1);
	assert(repo.findElem(Student("Lingura", 19, 5)) == -1);
	repo.saveToFile();
}

void TestRepositoryFile::testDelElem()
{
	repo.loadFromFile("TestStud.txt");
	repo.delElem(Student("Paine", 19, 5));
	assert(repo.size() == 4);
	repo.saveToFile();
}

void TestRepositoryFile::testGetAll()
{
	repo.loadFromFile("TestStud.txt");
	vector<Student> rez = repo.getAll();
	assert(rez.size() == 4);
	repo.saveToFile();
}

void TestRepositoryFile::testUpdateElem()
{
	repo.loadFromFile("TestStud.txt");
	repo.updateElem(Student("Cutit", 19, 20), "Lingura", 20);
	assert(repo.findElem(Student("Lingura", 20, 5)) == 1);
	repo.saveToFile();
}

void TestRepositoryFile::testElemAtPos()
{
	repo.loadFromFile("TestStud.txt");
	assert(repo.elemAtPos(1) == Student("Maria", 19, 20));
	repo.saveToFile();
}

void TestRepositoryFile::testSize()
{
	repo.loadFromFile("TestStud.txt");
	assert(repo.size() == 4);
}

void TestRepositoryFile::testSaveToFile()
{
	repo.loadFromFile("TestStud.txt");
	int n = repo.size();
	repo.addElem(Student("Paine", 19, 5));
	repo.saveToFile();
	repo.loadFromFile("TestStud.txt");
	assert(repo.getAll().size() == (n + 1));

}


TestRepositoryFile::~TestRepositoryFile()
{
}
