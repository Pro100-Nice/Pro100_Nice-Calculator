#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(int argc, char * argv[])
{
	if (argc != 4)
		cout << "Error. Parameters should be 4.";
	else
	{
		char* p1, *p2;
		double argument1 = strtod(argv[1], &p1);
		double argument2 = strtod(argv[3], &p2);
		if (strlen(p1) != 0 || strlen(p2) != 0)
			cout << "Error. The extra operand is not a numeric part.";
		else
		{
			if (strlen(argv[2]) != 1)
				cout << "Error. The operators should be single-character.";
			else
			{
				if (argv[2][0] == '+')
					cout << argument1 + argument2;
				else if (argv[2][0] == '-')
					cout << argument1 - argument2;
				else if (argv[2][0] == '/')
					cout << argument1 / argument2;
				else if (argv[2][0] == '*')
					cout << argument1 * argument2;
				else cout << "Error. The operators must be '+' or '-' or '/' or '*'.";
			}
		}
	}
}