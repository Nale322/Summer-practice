#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void zaglavnie(string &s)
{
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'A')
			s[p] = 'a';
		if (s[p] == 'E')
			s[p] = 'e';
		if (s[p] == 'Y')
			s[p] = 'y';
		if (s[p] == 'U')
			s[p] = 'u';
		if (s[p] == 'I')
			s[p] = 'i';
		if (s[p] == 'O')
			s[p] = 'o';
	}
	
}
int main()
{
	string alo("A E 3YYU");
	zaglavnie(alo);
	cout << alo << endl;
	if (alo == "a e 3yyu")
	{
		cout << "It's working" << endl;
	}
	else
	{
		cout << "Something went wrong" << endl;
	}
	return 0;
}

