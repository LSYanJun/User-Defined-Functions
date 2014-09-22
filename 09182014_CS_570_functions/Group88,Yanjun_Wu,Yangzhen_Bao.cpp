//Group:88 Yanjun Wu, Yangzhen Bao
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int count_word(string s)
{
	
	int x;
	x = int(s.length());
	if (x > 3)
	{
		x = 3;
	}
	return x;
}

void output_table(int a, int b, int c)
{
	cout << endl;
	cout << "frequency table:" << endl;
	cout << "The number of 1-letter Words is " << a << endl;
	cout << "The number of 2-letter Words is " << b << endl;
	cout << "The number of 3-letter Words is " << c << endl;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	string str,stmp;
	ifstream fin("input.txt");
	cout << "couting..." << endl;
	while (getline(fin, str))
	{
		istringstream istr(str);
		while (!istr.eof())
		{
			istr >> stmp;
			sum = count_word(stmp);
			if (sum == 1)
			{
				a++;
			}
			if (sum == 2)
			{
				b++;
			}
			if (sum == 3)
			{
				c++;
			}
			cout << stmp << " has " << sum << " letters." << endl;
		}
	}
	
	output_table(a,b,c);
	fin.close();
	return 0;
}