#include "Struct_of_data.h"
int main()
{
	Struct_of_data A('A', 6);
	A.Print();
	char a[] = "Abcdefghij";
	int b[] = { 1,2,3,4,8,9,0 };
	Stek B(A);

	B.Print();
	B.Push_back_a_lot(a, b, 10, 7);
	B.Print();
	B.Delete(10, 5);
	B.Print();
	B.Infosize();
	
	A = B+A;		//Добавленное в лабе № 3
	A.Print();		//И это тоже

	_getch();
	return 0;
}