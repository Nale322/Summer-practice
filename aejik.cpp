#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string s;
	int l = 0, d = 0, f = 0, g = 0, h = 0, j = 0;
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
			g++;
		if (s[p] == 'i')
			h++;
		if (s[p] == 'o')
			j++;
	}
	cout << "a = " << l << " " << "e = " << d << " " << "y = " << f << " " << "u = " << g << " " << "i = " << h << " " << "o = " << j << endl;
	system("pause");
	return 0;
}

