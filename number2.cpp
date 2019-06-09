#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string bukovki(string g)
{
	string s;
	int l = 0, d = 0, f = 0, k = 0, h = 0, j = 0;
	getline(cin,s);
	s.length();
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'a')
			l++;
		if (s[p] == 'e')
			d++;
		if (s[p] == 'y')
			f++;
		if (s[p] == 'u')
			k++;
		if (s[p] == 'i')
			h++;
		if (s[p] == 'o')
			j++;
	}
	cout << "a = " << l << " " << "e = " << d << " " << "y = " << f << " " << "u = " << k << " " << "i = " << h << " " << "o = " << j << endl;
	return s;
}

int main()
{
	string s;
    bukovki(s);
	return 0;
}

