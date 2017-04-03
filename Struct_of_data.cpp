#include "Struct_of_data.h"



Struct_of_data::Struct_of_data()
{
	a.push_back('0'); b.push_back(0);
}
Struct_of_data::Struct_of_data(char x1, int x2)
{
	a.push_back(x1); b.push_back(x2);
}
Struct_of_data::Struct_of_data(const Struct_of_data& p)
{
	for(int i(0); i < p.a.size(); i++)
	a.push_back(p.a[i]);
	for (int i(0); i < p.b.size(); i++)
	b.push_back(p.b[i]);
}
void Struct_of_data::Print()
{
	for (int i(0); i < a.size(); i++)
		cout << a[i] << ' ';
	cout << endl;
	for (int i(0); i < b.size(); i++)
		cout << b[i] << ' ';
	cout << endl;
}
void Struct_of_data::Push_back(char x1, int x2)
	{
		a.push_back(x1); b.push_back(x2);
	}
Struct_of_data Struct_of_data::Maxdata(Struct_of_data& p)
{
	if (this->a.size() > p.a.size())
		return *this;
	else return p;
}
Struct_of_data::~Struct_of_data()
{
	for (int i(a.size()-1); i >=0; i--)
		a.pop_back();
	for (int i(b.size() - 1); i >= 0; i--)
		b.pop_back();
}
void Struct_of_data::operator = (const Struct_of_data& v)						//Добавленное в лабе № 3
{																				//
	this->~Struct_of_data();													//
	for (int i(0); i < v.a.size(); i++)											//
		a.push_back(v.a[i]);													//
	for (int i(0); i < v.b.size(); i++)											//	
		b.push_back(v.b[i]);													//
}																				//
Struct_of_data operator+(const Struct_of_data &D1, const Struct_of_data &D2)	//И это тоже
{																				//
	Struct_of_data D3(D1);														//
	for (int i(0); i < D2.a.size(); i++)										//
		D3.a.push_back(D2.a[i]);												//
	for (int i(0); i < D2.b.size(); i++)										//
		D3.b.push_back(D2.b[i]);												//
	return D3;																	//
}																				//Вот и всё
void Stek::Push_back_a_lot(char* x1, int* x2, int l1, int l2)
{
	for (int i(0); i < l1; i++)
		a.push_back(x1[i]);
	for (int i(0); i < l2; i++)
		b.push_back(x2[i]);
}
void Stek::Infosize()
{
	cout << "Size of char data is equal to " << a.size() << endl;
	cout << "Size of int data is equal to " << b.size() << endl;
}
void Stek::Delete(int x1, int x2)
{
	while (x1)
	{
		a.pop_back();
		x1--;
	}
	while (x2)
	{
		b.pop_back();
		x2--;
	}
}