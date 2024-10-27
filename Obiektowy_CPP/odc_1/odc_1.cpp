#include <iostream>

using	namespace std;

class	Animal
{
	public:
	// Attributes
	string	species;
	string	name;
	int		age;

	// Methods
	void	add_animal()
	{
		cout<<"Adding new animal to data base: "<<endl;
		cout<<"specify the species: ";
		cin>>species;
		cout<<"enter animal name: ";
		cin>>name;
		cout<<"Podaj wiek: ";
		cin>>age;
	}
	void	give_voice()
	{
		if (species=="cat") cout<<name<<" age "<<age<<": MEOW!"<<endl;
		else if (species=="goat") cout<<name<<" age "<<age<<": BEEEE!"<<endl;
		else if (species=="cow") cout<<name<<" age "<<age<<": MOOOO!"<<endl;
		else cout<<"Unknown species!"<<endl;
	}
};

int	main()
{
	Animal	z1;

	z1.add_animal();
	z1.give_voice();

	Animal	z2;

	z2.add_animal();
	z2.give_voice();

	return (0);
}