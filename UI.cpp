/*#include "UI.h"
#include <iostream>
using namespace std;

void addStud(Service& s) {
	Student stud;
	cout << "Dati studentul:";
	cin >> stud;
	s.addStudent(stud);
	cout << "Studentul a fost adaugat cu succes!" << endl;
}


void findStud(Service& serv) {
	Student stud;
	cout << "Dati studentul:";
	cin >> stud;
	bool rez=serv.findOne(stud);
	if (rez) cout << "Studentul a fost gasit!" << endl;
		else cout << "Studentul nu a fost gasit!" << endl;
}

void delStud(Service& serv) {
	Student stud;
	cout << "Dati studentul:";
	cin >> stud;
	int rez=serv.delStudent(stud);
    if(rez==0) cout << "Studentul a fost  sters cu succes!" << endl;
		else cout << "Studentul NU a fost sters!" << endl;
}

void showAll(Service& serv) {
	vector<Student> stud = serv.getAll();
	for (Student s : stud)//"range based for loop"~Java,C#
		cout << s;
}


void showAlphabeticallySorted(Service& serv) {
	vector<Student> stud = serv.sortByName();
	for (Student s : stud)
		cout << s;
}

void showAgeSorted(Service& serv) {
	vector<Student> stud = serv.sortByAge();
	for (Student s : stud)
		cout << s;
}

void showFilteredStudents(Service& serv) {
	char* n = new char[10];
	int v;
	cout << "Dati subsirul cautat in nume: ";
	cin >> n;
	cout << "Dati limita de varsta:";
	cin >> v;

	vector<Student> stud = serv.filterByNameAndAge(n,v);
	for (Student s : stud)
		cout << s;
	delete [] n;
}

void showUI(Service& serv)
{
	bool gata = false;
	while (!gata) {
		cout << endl;
		cout << "OPTIUNI: " << endl;
		cout << "	1. Adauga student " << endl;
		cout << "	2. Cauta student " << endl;
		cout << "	3. Sterge student " << endl;
		cout << "	4. Afiseaza toti studentii " << endl;
		cout << "	5. Afiseaza studentii ordonati alfabetic " << endl;
		cout << "	6. Afiseaza studentii ordonati descrescator dupa varsta " << endl;
		cout << "	7. Filtreaza studentii dupa nume si varsta " << endl;
		cout << "	0. EXIT!" << endl;
		cout << "Introduceti optiunea (prin numarul ei): " << endl;
		int opt;
		cin >> opt;
		switch (opt) {
		case 1: {addStud(serv); break; }
		case 2: {findStud(serv); break; }
		case 3: {delStud(serv); break; }
		case 4: {showAll(serv); break; }
		case 5: {showAlphabeticallySorted(serv); break; }
		case 6: {showAgeSorted(serv); break; }
		case 7: {showFilteredStudents(serv); break; }
		case 0: {gata = true; cout << "LA REVEDERE!" << endl; }
		}
	}
}
*/