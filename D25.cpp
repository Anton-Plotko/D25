#include <iostream>
#include <vector>
#include <string>

class MyString
{
public:
	MyString()
	{
		length = 1;
		string = new char[length];
		string[0] = '\0';
	}

	MyString(const char* string)
	{
		length = static_cast<int>(strlen(string));
		this->string = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			this->string[i] = string[i];
		}

		this->string[length] = '\0';
	}

	~MyString()
	{
		delete[]string;
		length = 0;
	}

	friend std::ostream& operator << (std::ostream& os, const MyString& myStr)
	{

		return os << myStr.string;

	};

	friend std::istream& operator >> (std::istream& is, MyString& myStr)
	{

		return is >> myStr.string;

	};

	MyString(const MyString& other)
	{
	
			length = other.length;
			this->string = new char[length + 1];
			for (int i = 0; i < length; i++)
			{
				this->string[i] = other.string[i];
			}

			this->string[length] = '\0';
		
	};

	MyString& operator =(const MyString& other)
	{
		if (this != &other)
		{
			length = other.length;
			this->string = new char[length + 1];
			for (int i = 0; i < length; i++)
			{
				this->string[i] = other.string[i];
			}

			this->string[length] = '\0';
		}

		return*this;
	};

	 MyString operator+(const MyString& other)
	{
		 MyString newStr;
		 int thisLenght = this->length;
		 int otherLenght = other.length;
		 newStr.length = thisLenght + otherLenght;
		 newStr.string = new char[newStr.length+1];
		 int i = 0;
		 for (; i < thisLenght; i++)
		 {
			 newStr.string[i] = this->string[i];
		 }
		 for (int j = 0; j < otherLenght; j++,i++)
		 {
			 newStr.string[i] = other.string[j];
		 }
		 newStr.string[newStr.length] = '\0';
		 return newStr;
	};

	 char operator[](const int i)
	 {
		 return string[i];
	 }

	 int size()
	 {
		 return length;
	 }

private:

	char* string;
	int length;
	

};



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

