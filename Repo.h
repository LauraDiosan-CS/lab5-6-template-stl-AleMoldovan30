#pragma once
#include "Magazine.h"
#include <set>
#include <iterator>
using namespace std;

template <typename T>
class Repo {

	protected:
		std::set <T> array;
		const char* fis;
	public:

		Repo();
		~Repo();

		void insert(T);
		int get_len();
		//void updateS(T, char*, double, int);
		void updateS(T, T);
		void delS(T);
		std::set<T> get_all();
};

template <typename T>
Repo<T>::Repo() {


}

template <typename T>
Repo<T>::~Repo() {

}

template <typename T>
void Repo<T>::insert(T s) {
	this->array.insert(s);
}

template <typename T>
int Repo<T>::get_len() {
	return this->array.size();
}

template <typename T>
std::set<T> Repo<T>::get_all() {
	return this->array;
}

template <typename T>
void Repo<T>::updateS(T s, T s1) 
{
	/*set<T>::iterator it;
	it = find(array.begin(), array.end(), s);
	if (it != array.end())
	{
		/*(*it).set_nume(nume);
		(*it).set_pret(pret);
		(*it).set_buc(buc);
	}*/
	array.erase(s);
	array.insert(s1);
}

template <typename T>
void Repo<T>::delS(T s)
{
	array.erase(s);
	/*set<T>::iterator it;
	it = find(array.begin(), array.end(), s);
	if (it != array.end())
	{
		array.erase(it);
		return 0;
	}
	return -1;*/
}
