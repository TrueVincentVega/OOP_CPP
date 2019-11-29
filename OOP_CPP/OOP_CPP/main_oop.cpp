#include <iostream>
using namespace std;

class Point
{
	double x;
	double y;

public:
	double get_x()const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		if (x >= 100 && x <= 1000) //фильтраци€ значений по оси 'x'
		{
			this->x = x;
		}
		else
		{
			this->x=0;
		}
	}
	void set_y(double y)
	{
		this->y = y;
	}
	// Constructors:
	/*Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}*/

	Point(double x = 0, double y = 0) /*у этого конструктора каждый параметр имеет значение по умолчанию,
									  которое он примет если при вызове функции не передать соответсвующие аргументы*/
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t" << this << endl;
	}

	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "Constructor:\t" << this << endl;
	}

	~Point()
	{
		cout << "Destructor:\t" << this << endl;
	}

	// Methods:
	void print()
	{
		cout << x << "\t" <<  y << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "");
	int a;
	/*int a; //объ€вление переменной "а" типа "int"
	Point A; //объ€вление переменной "A" типа "Point", или объ€вление объекта "A" структуры "Point"
	cout << sizeof(A) << endl;
	cout << sizeof(Point) << endl;
	//обращение к пол€м объекта
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
	cout << pA << endl;
	cout << &(*pA).x << endl;
	cout << &(*pA).y << endl;
	*/
	Point A(2, 3);
	/*cout << A.get_x() << "\t" << A.get_y() << endl;
	A.set_x(2);
	A.set_y(3);*/
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B;
	//cout << B.get_x() << "\t" << B.get_y() << endl;
	B.print();

	Point C = 5;
	C.print();

	Point D = C;
	D.print();
}