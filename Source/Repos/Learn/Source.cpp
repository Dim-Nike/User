#include <iostream>
#include <string>

using namespace std;

/*string foo()
{
	string a = "Hello";
	string b = "world";
 return a + " " + b;
 //cout << a + " " + b << endl;
} */

//



class G
{
public:
	void c(int a, int b)
	{
		int c = a + b;
		cout << a << " + " << b << " = " << c << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	G v1;
	v1.c(4, 7);

	return 0;
}