#include <iostream>

using	namespace	std;

// This is another program that helps me understand the power of objects, classes and methods

// class = attributes + methods


// TO DO 
	// Class CAR
		// Attributes
			// car_brand
			// model
			// age_of_production
			// millage
		// Methods
			// load()
				// this will be method to assign attributes from keyboard
			// print()
				// this will be method to print data on screen
	// Create 2 Objects c1 and c2

class	Car
{
	public:

	// Attributes
	string	car_brand;
	string	model;
	int		age_of_production;
	int		millage;
	bool	flag = false;

		// Methods
			// load()
				// this will be method to assign attributes from keyboard
			// print()
				// this will be method to print data on screen
	// Methods
	void	load()
	{
		cout<<"Please provide me with your car brand: "<<endl;
		cin>>car_brand;
		cout<<"Please provide me with your car model: "<<endl;
		cin>>model;
		cout<<"Please provide me with your car age of production : "<<endl;
		cin>>age_of_production;
		cout<<"Please provide me with your car millage: "<<endl;
		cin>>millage;
		flag = true;
	}
	void	print()
	{
		if (car_brand == "Opel" && model == "Corsa" && age_of_production == 2003) cout<<"YOU HAVE THE BEST CAR IN THE WORLD <3"<<endl;
		else cout<<"Oh you have a car... cool"<<endl;
	}
};

int	main()
{
	Car	c1;
	Car	c2;

	c1.load();
	if (c1.flag == false) c2.load();
	if (c1.flag == true) c1.print();
	else if (c1.flag == false) c2.print();
	
	return (0);
}
