#include <iostream>

int	main()
{
	char	op;
	double	num1;
	double	num2;
	double	result;

	std::cout << "***************** CALCULATOR *****************" << std::endl;

	std::cout << "input one of (+ - * /): ";
	std::cin >> op;

	std::cout << "Enter first num: ";
	std::cin >> num1;

	std::cout << "Enter second num: ";
	std::cin >> num2;

	if (op == '+')
		result = num1 + num2;
	else if (op == '-')
		result = num1 - num2;
	else if (op == '*')
		result = num1 * num2;
	else if (op == '/')
		result = num1 / num2;
	else
		std::cout << "wrong input" << std::endl;
	std::cout << "Result of " << num1 << " " << op << " " << num2 << " is: " << result << std::endl;

	std::cout << "*************************************************";
}
