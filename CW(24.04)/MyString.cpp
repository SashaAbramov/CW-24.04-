#include "MyString.h"
#include <iostream>
using namespace std;

void MyString::print()
{
	for (int i = 0; i < lenght - 1; i++){cout << str[i];}
	cout << endl;
}
