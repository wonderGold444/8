
#pragma once
#include <string>
#include<iostream>
using namespace std;
class Student 
{
private:
	string name;
	int  year;
	int age;
public :
	Student(int year , int age , string name)
	{
		this->name = name;
		this->year = year;
		this->age = age;
	}
	Student(){}
	friend ostream& operator <<(ostream& os, const Student& a);
	friend istream& operator >>(istream& is,  Student& a);
	Student operator = (Student a)
	{
		this->age = a.age;
		this->name = a.name;
		this->year = a.year;
		return *this;
	}
};
