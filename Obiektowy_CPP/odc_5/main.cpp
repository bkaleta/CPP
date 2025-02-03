#include <iostream>
#include <math.h>
#include <string>

using	namespace	std;

class Punkt
{
private:
	float	x, y;
	string	nazwa;
public:
	void	wyswietl()
	{
		cout << nazwa << "(" << x << "," << y << ")" << endl;
	}
	Punkt(string n = "S", float a = 0, float b = 0)
	{
		nazwa = n;
		x = a;
		y = b;
	}
};

class Kolo :public Punkt // Klasa kolo dziedziczy publicznie z klasy punkt
{
	float r;
	string nazwa;

public:
	void wyswietl()
	{
		cout << "kolo o nazwie: " << nazwa << endl;
		cout << "srodek kola: " << endl;
		Punkt::wyswietl();
		cout << "Promien: " << r << endl;
		cout << "Pole kola : " << M_PI * r * r << endl;
	}
	Kolo(string nk="Kolo", string np="S", float a=0, float b=0, float pr=1)
	:Punkt(np, a, b)
	{
		nazwa = nk;
		r = pr;
	}
};

int	main()
{
	Kolo	k1;

	k1.wyswietl();
	return 0;
}