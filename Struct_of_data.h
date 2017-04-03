#pragma once
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
class Struct_of_data
{
protected:
	vector <char> a;
	vector <int> b;
public:
	Struct_of_data();
	Struct_of_data(char, int);
	Struct_of_data(const Struct_of_data& p);
	void Struct_of_data::Print();
	void Struct_of_data::Push_back(char x1, int x2);
	Struct_of_data Struct_of_data::Maxdata(Struct_of_data& p);

	void operator=(const Struct_of_data&);											 //Добавленное в лабе № 3
	friend Struct_of_data operator + (const Struct_of_data&, const Struct_of_data&); //И это тоже

	~Struct_of_data();
};
class Stek : public Struct_of_data
{
public:
	Stek() :Struct_of_data() {};
	Stek(char x1, int x2) :Struct_of_data(x1,x2){};
	Stek(Struct_of_data &p) :Struct_of_data(p) {};
	void Stek::Push_back_a_lot(char* x1, int* x2, int l1, int l2);
	void Stek::Infosize();
	void Stek::Delete(int x1, int x2);
	~Stek() 
	{
		for (int i(a.size() - 1); i >= 0; i--)
			a.pop_back();
		for (int i(b.size() - 1); i >= 0; i--)
			b.pop_back();
	};
};
