#ifndef KLASY_HPP
# define KLASY_HPP

#include <string>
#include <iostream>

class	Prostokat;

class Punkt
{
private:
	float		x, y;
	std::string	name;
public:
	Punkt(std::string = "A", float = 0, float = 0);
	void	wczytaj();
	friend void	sedzia(Punkt &pkt, Prostokat &p);
};

class Prostokat
{
private:
	float		x, y, width, height;
	std::string	name;
public:
	Prostokat(std::string = "brak", float = 0, float = 0, float = 1, float = 1);
	void	wczytaj();
	friend void	sedzia(Punkt &pkt, Prostokat &p);
};

#endif