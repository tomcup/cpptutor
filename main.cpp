// main.cpp

import std;

import employee;
import mode;

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

	std::cout << std::endl;

	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	std::cout << std::format("Employee: {}{}", anEmployee.firstInitial, anEmployee.lastInitial) << std::endl;
	std::cout << std::format("Number: {}", anEmployee.employeeNumber) << std::endl;
	std::cout << std::format("Salary: ${}", anEmployee.salary) << std::endl;

	int value { 42 };
	Mode mode {};

	switch (mode) {
		using enum Mode;
		case Custom:
			value = 84;
			[[fallthrough]];
		case Standard:
		case Default:
			value = 0;
	}

	std::cout << std::format("The value is: {}", value) << std::endl;
}
