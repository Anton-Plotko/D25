#include <iostream>
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

private:

	char* string;
	int length;

};



int main()
{
	MyString string1("Hallo");
	MyString string2("World!");
	MyString Str;
	Str = string1 + string2;
	std::cout << Str << std::endl;

	

}

