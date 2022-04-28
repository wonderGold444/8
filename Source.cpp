
#include "Header.h"
using namespace std;
 ostream& operator <<(ostream& os, const Student& a)
{
	os << "Name of the student : " << a.name <<"\n" << "Age of the student : " << a.age <<"\n" << "Year of the studying : " << a.year;
	return os;

}
 istream& operator >>(istream& is, Student& a)
 {
	 cout << "Enter name of the student : " << endl;
	 is >> a.name;
	 cout << "Enter age of the student : " << endl;
	 is >> a.age;
	 cout << "Enter year of the studying : " << endl;
	 is >> a.year;
	 return is;
 }