#include "klasy.hpp"

void	sedzia(Punkt &pkt, Prostokat &p)
{
	p.name = "PODMIANA";
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.width)
		&& (pkt.y >= p.y) && (pkt.y <= p.y + p.height))
	{
		std::cout << std::endl << "Punkt " 
		<< pkt.name <<" nalezy do prostokata: " << p.name << std::endl;
	}
	else
	{
		std::cout << std::endl << "Punkt " 
		<< pkt.name <<" lezy POZA prostokatem: " << p.name << std::endl;
	}
}

int	main()
{
	Punkt	pkt1("A", 3, 1);
	Prostokat	p1("Prostokat", 0, 0, 6, 4);

	// pkt1.wczytaj();
	// p1.wczytaj();

	sedzia(pkt1, p1);

	return (0);
}