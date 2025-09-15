// main.cpp

#include <iostream>

int main(){
	int x, y, z;

	x = 3;
	y = 5;

	std::cout << x << " + " << y << " = ";

	std::cin >> z;

	if (x+y == z)
		std::cout << "right!" << std::endl;
	else
		std::cout << "wrong!" << std::endl;

	return 0;
}
