#pragma once
#include<iostream>

class MyString
{
public:
	MyString();
	MyString(const char* string);
	~MyString();
	MyString(const MyString& other);
	friend std::ostream& operator << (std::ostream& os, const MyString& myStr);
	friend std::istream& operator >> (std::istream& is, MyString& myStr);
	MyString& operator =(const MyString& other);
	MyString operator +(const MyString& other);
	char operator [](const int i);
	int size();
private:
	char* string;
	int length;
};

