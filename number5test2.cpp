#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string bukovki(string s, int w[6])
{
	for (int i = 0; i < 6; i++)
		w[i] = 0;
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'a')
			w[0]++;
		if (s[p] == 'e')
			w[1]++;
		if (s[p] == 'y')
			w[2]++;
		if (s[p] == 'u')
			w[3]++;
		if (s[p] == 'i')
			w[4]++;
		if (s[p] == 'o')
			w[5]++;
	}
	return s;
}

int main()
{
	string s("a a e y3y");
	int mas[6];
    bukovki(s,mas);
    cout << s << endl;
    if (mas[0] == 2 && mas[1] == 1 && mas[2] == 2)
    {
    	cout << "All is ok";
	}
	else
	{
		cout << "Something went wrong" << endl;
	}
	return 0;
}

