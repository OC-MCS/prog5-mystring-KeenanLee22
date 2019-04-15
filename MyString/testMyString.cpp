// test driver code goes here
#include <cstring>
#include <iostream>
#include "MyString.h"
using namespace std;
ostream &operator<<(ostream & strm, MyString &other);
void compare(MyString, MyString);
int main()
{
	MyString s1("Billy");
	cout << s1 << endl;
	MyString s2(" Bobjoe");
	MyString s3 = s1 + s2;
	cout << s3 << endl;
	MyString s4(s1);
	cout << s4 << endl;
	compare(s1, s2);
	compare(s1, s4);



	return 0;
}

//=====================================
// << operator to display the MyString
//=====================================
ostream &operator<<(ostream & strm, MyString &other)
{
	strm << other.c_str();
	return strm;
}

//==================================================
// Compares two strings and displays if same or not
//==================================================
void compare(MyString name1, MyString name2)
{
	if (name1 == name2)
	{
		cout << "Same first and last name." << endl;
	}
	else
	{
		cout << "Unique first and last name." << endl;
	}

}

