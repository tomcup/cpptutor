// main.cpp

import std;

int main(){
	int uninitializedInt;
	int initializedInt { 7 };

	std::cout << std::format("{} is random value", uninitializedInt) << std::endl;
	std::cout << std::format("{} was assigned an initial value", initializedInt) << std::endl;

	std::cout << "int:\n";
	std::cout << std::format("Max int value: {}\n", std::numeric_limits<int>::max());
	std::cout << std::format("Min int value: {}\n", std::numeric_limits<int>::min());
	std::cout << std::format("Lowest int value: {}\n", std::numeric_limits<int>::lowest());

	std::cout << "\ndouble:\n";
	std::cout << std::format("Max double value: {}\n", std::numeric_limits<double>::max());
	std::cout << std::format("Min double value: {}\n", std::numeric_limits<double>::min());
	std::cout << std::format("Lowest double value: {}\n", std::numeric_limits<double>::lowest());
}
