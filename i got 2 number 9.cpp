#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string bukovki(string s)
{
    string g;
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'a'||s[p] == 'e'||s[p] == 'y'||s[p] == 'u'||s[p] == 'i'||s[p] == 'o')
		g+=s[p];
    }
    return g;
}
int main()
{
    string s;
    getline(cin, s);
    cout << bukovki(s);
}
