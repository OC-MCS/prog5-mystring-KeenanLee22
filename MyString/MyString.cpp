#include "MyString.h"
#include <cstring>
#include <iostream>
using namespace std;
// MyString implementation file

//=============================
// Default Constructor
//=============================
MyString::MyString()
{
	ptr = nullptr;
}

//=============================
// Constructor
//=============================
MyString::MyString(const char *string)
{
	int size = strlen(string) + 1;
	ptr = new char[size];
	strcpy_s(ptr, size, string);
}
//=============================
// Destructor
//=============================
MyString::~MyString()
{
	cout << "Destructor running.\n";
	delete [] ptr;
}

//=============================
// Copy Constructor
//=============================
MyString::MyString(const MyString &other)
{
	cout << "Copy Constructor running.\n";
	int size = strlen(other.ptr) + 1;
	ptr = new char[size];
	strcpy_s(ptr, size, other.ptr);
}

//================================
// Overloaded Assignment Operator
//================================
MyString MyString::operator=(const MyString & other)
{
	if (this != &other)
	{
		delete [] ptr;
		int size = strlen(other.ptr)+1;
		ptr = new char[size];
		strcpy_s(ptr, size, other.ptr);
	}
	return *this;

}

//====================================
// == Operator to compare two strings
//====================================
bool MyString::operator==(const MyString & other)
{
	bool same;
	if (strcmp(ptr, other.ptr) == 0)
	{
		same = true;
	}
	else
	{
		same = false;
	}
	return same;
}

//=================================
// + Operator to add two MyStrings
//=================================
MyString MyString::operator+(const MyString & other)
{
	int size = strlen(ptr) + strlen(other.ptr) + 1;
	char* combined;
	combined = new char[size];
	strcpy_s(combined,size, ptr);
	strcat_s(combined, size, other.ptr);
	return combined;
}

//=============================
// returns ptr for << operator
//=============================
const char * MyString::c_str()
{
	return ptr;
}
