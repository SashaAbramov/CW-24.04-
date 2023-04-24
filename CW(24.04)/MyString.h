#pragma once
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
class MyString
{
private:
	char* str;
	int lenght;
public:
	MyString() {
		lenght = 0;
		str = nullptr;
	}

	MyString(const char* newstr) {
		lenght = strlen(newstr);
		str = new char[lenght];
		for (int i = 0; i < lenght; i++)
		{
			str[i] = newstr[i];
		}
		//str[lenght] = '\0'; ?
		lenght++;
	}

	~MyString() {
		delete[] str;
	}

	void print();

	MyString operator + (const MyString& other) {
		MyString temp;
		temp.lenght = this->lenght + other.lenght;
		temp.str = new char[lenght] - 1;
		int count = 0;
		while (this->str[count] != '\0') {
			temp.str[count] = this->str[count];
			count++;
		}
		int count = 0;
		while (other.str[count] != '\0') {
			temp.str[count] = other.str[count];
			count++;
		}
		temp.str[lenght] = '\0';
		return temp;
	}

	MyString(const MyString& other) {
		this->lenght = other.lenght;
		this->str = new char[this->lenght];
		for (int i = 0; i < this->lenght; i++)
		{
			this->str[i] = other.str[i];
		}
		this->str[this->lenght]
	}

	MyString(MyString& other) {
		this->
	}
};