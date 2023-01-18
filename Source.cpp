#include <iostream>

enum ZilelelSaptamanii
{
	Luni,
	Marti,
	Miercuri,
	Joi,
	Vineri,
	Sambata,
	Duminica,
};

int main()
{
	ZilelelSaptamanii zi = Miercuri;
	std::cout << "Valoarea variabilei zi este " << zi << std::endl;

	system("pause");
}