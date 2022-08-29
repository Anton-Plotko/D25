#include <iostream>
#include <vector>
#include <string>
#include"MyString.h"

int main()
{
	/*MyString string1("Hallo");
	MyString string2("World!");
	MyString Str;
	Str = string1 + string2;
	std::cout << Str << std::endl;*/

	setlocale(LC_ALL, "ru");

	MyString a1 = "Сегодня";
	MyString a2 = "смотрел";
	MyString a3 = "интересный";
	MyString a4 = "фильм";
	std::vector<MyString> vec = { a1,a2,a3,a4 };
	
	MyString b1 = "Завтра";
	MyString b2 = "пойду";
	MyString b3 = "в";
	MyString b4 = "спортзал";
	std::vector<MyString> vec1 = { b1,b2,b3,b4 };

	MyString c1 = "Вчера";
	MyString c2 = "ел";
	MyString c3 = "вкусную";
	MyString c4 = "пиццу";
	std::vector<MyString> vec2 = { c1,c2,c3,c4 };

	MyString d1 = "После";
	MyString d2 = "завтра";
	MyString d3 = "уеду";
	MyString d4 = "путешествовать";
	std::vector<MyString> vec3 = { d1,d2,d3,d4 };

	/*for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << '\n';
	for (int i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i] << " ";
	}
	std::cout << '\n';
	for (int i = 0; i < vec2.size(); i++)
	{
		std::cout << vec2[i] << " ";
	}
	std::cout << '\n';
	for (int i = 0; i < vec3.size(); i++)
	{
		std::cout << vec3[i] << " ";
	}
	std::cout << '\n';*/
	
	if(vec[vec.size()-1].size()>5)
	{
		std::cout << vec[vec.size()-1] << '\n';
	}
	else
	{
		std::cout<<"Empty"<<'\n';
	}


	if (vec1[vec1.size() - 1].size() > 5)
	{
		std::cout << vec1[vec1.size() - 1] << '\n';
	}
	else
	{
		std::cout << "Empty" << '\n';
	}


	if (vec2[vec2.size() - 1].size() > 5)
	{
		std::cout << vec2[vec2.size() - 1] << '\n';
	}
	else
	{
		std::cout << "Empty" << '\n';
	}


	if (vec3[vec3.size() - 1].size() > 5)
	{
		std::cout << vec3[vec3.size() - 1] << '\n';
	}
	else
	{
		std::cout << "Empty" << '\n';
	}

	return 0;
}

