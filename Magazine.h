#pragma once
#include <ostream>

class Carte {

	private:

		char* nume;
		double pret;
		int buc;

	public:

		Carte();//constructor implicit
		Carte(char*, double, int);//constructor de initializare
		Carte(const Carte&);//constructor de copiere
		~Carte();//destructor

		//Getters

		char* get_nume();
		double get_pret();
		int get_buc();

		//Setters

		void set_nume(char*);
		void set_pret(double);
		void set_buc(int);

		//Overwrite operators '=' , "==" and "<<"

		Carte& operator =(const Carte&);
		bool operator==(const Carte&) const;
		bool operator!=(const Carte&) const;
		bool operator<(const Carte&) const;
		bool operator<=(const Carte&) const;
		bool operator>(const Carte&) const;
		bool operator>=(const Carte&) const;
		friend std::ostream& operator << (std::ostream&, const Carte);
		friend std::istream& operator >> (std::istream&, const Carte&);

};