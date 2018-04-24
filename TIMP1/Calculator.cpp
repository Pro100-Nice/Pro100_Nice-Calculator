#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(int argc, char * argv[])
{
	if (argc != 4)
	{
		cout << "Error. Parameters should be 4.";
		return 1;
	}
	char* p1, *p2;
	double argument1 = strtod(argv[1], &p1);
	double argument2 = strtod(argv[3], &p2);
	if ((p1 != '\0') || (p2 != '\0'))
	{
		cout << "Error. The operand is not a number.";
		return 2;
	}
	if (abs(argument1) == HUGE_VAL || abs(argument2) == HUGE_VAL)
	{
		cout << "Error. The value of the operand is beyond the allowed values.";
		return 3;
	}
	if (strlen(argv[2]) != 1)
	{
		cout << "Error. The operator should be single-character.";
		return 4;
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/')
	{
		cout << "Error. The operators must be '+' or '-' or '/' or '*'.";
		return 5;
	}
	if (argv[2][0] == '+' && abs(argument1 + argument2) != HUGE_VAL)
		cout << argument1 + argument2;
	else if (argv[2][0] == '-' && abs(argument1 - argument2) != HUGE_VAL)
		cout << argument1 - argument2;
	else if (argv[2][0] == '/' && argument2 != 0 && abs(argument1 - argument2) != HUGE_VAL)
		cout << argument1 / argument2;
	else if (argv[2][0] == '*' && abs(argument1 * argument2) != HUGE_VAL)
		cout << argument1 * argument2;
	else
	{
		cout << "Error. The result of the calculations is beyond the limits of admissible values. Or there is a division by 0.";
		return 6;
	}
	return 0;
}