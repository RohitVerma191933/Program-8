#include<iostream>
#include<stdio.h>
using namespace std;
class shape
{
	virtual int No_of_sides()=0;
};
class TRAPEZOID: shape
{
	public :
	int No_of_sides()
	{
		cout<<"NUMBER OF SIDES IN TRAPEZOID ARE : 4 "<<endl;
	}
};
class TRIANGLE : shape
{
	public :
	int No_of_sides()
	{
		cout<<"NUMBER OF SIDES IN TRIANGLE ARE : 3"<<endl;
	}
};
class HEXAGON : shape
{
	public :
	int No_of_sides()
	{
		cout<<"NUMBER OF SIDES IN HEXAGON ARE : 6"<<endl;
	}
};
int main()
{
	TRAPEZOID trapezoid;
	TRIANGLE triangle;
	HEXAGON hexagon;
	trapezoid.No_of_sides();
	triangle.No_of_sides();
	hexagon.No_of_sides();
}
