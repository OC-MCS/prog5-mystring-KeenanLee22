#pragma once
using namespace std;
#include <cstring>
// MyString class declaration goes here
class MyString
{
private:
	char* ptr;
public:
	MyString();
	MyString(const char*);
	~MyString();
	MyString(const MyString&);
	MyString operator=(const MyString & other);
	bool operator==(const MyString & other);
	MyString operator+(const MyString & other);
	const char* c_str();
};