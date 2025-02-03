#include "klasy.hpp"

Punkt::Punkt(std::string n, float xx, float yy)
{
	name = n;
	x = xx;
	y = yy;
}

void	Punkt::wczytaj()
{
	std::cout << "Podaj x: "; 		std::cin >> x;
	std::cout << "Podaj y: "; 		std::cin >> y;
	std::cout << "Nazwa punktu: "; 	std::cin >> name;
}

Prostokat::Prostokat(std::string n, float xx, float yy, float w, float h)
{
	name = n;
	x = xx;
	y = yy;
	width = w;
	height = h;
}

void	Prostokat::wczytaj()
{
	std::cout << "Podaj x lewego dolnego naroznika: "; std::cin >> x;
	std::cout << "Podaj y lewego dolnego naroznika: "; std::cin >> y;
	std::cout << "Podaj szerokosc: "; std::cin >> width;
	std::cout << "Podaj wysokosc: "; std::cin >> height;
	std::cout << "Podaj nazwe prostokata: "; std::cin >> name;
}