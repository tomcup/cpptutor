// main.cpp

import std;

import employee;
import mode;

void myFunction(int i, char c);

std::optional<int> getData(bool giveIt);

int main(){
	std::cout << "未初始化变量" << std::endl;
	int uninitializedInt;
	int initializedInt { 7 };

	std::cout << std::format("{} is random value", uninitializedInt) << std::endl;
	std::cout << std::format("{} was assigned an initial value", initializedInt) << std::endl;

	std::cout << "\n数值极限" << std::endl;
	std::cout << "int:\n";
	std::cout << std::format("Max int value: {}\n", std::numeric_limits<int>::max());
	std::cout << std::format("Min int value: {}\n", std::numeric_limits<int>::min());
	std::cout << std::format("Lowest int value: {}\n", std::numeric_limits<int>::lowest());

	std::cout << "\ndouble:\n";
	std::cout << std::format("Max double value: {}\n", std::numeric_limits<double>::max());
	std::cout << std::format("Min double value: {}\n", std::numeric_limits<double>::min());
	std::cout << std::format("Lowest double value: {}\n", std::numeric_limits<double>::lowest());

	std::cout << "\n结构" << std::endl;
	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	std::cout << std::format("Employee: {}{}", anEmployee.firstInitial, anEmployee.lastInitial) << std::endl;
	std::cout << std::format("Number: {}", anEmployee.employeeNumber) << std::endl;
	std::cout << std::format("Salary: ${}", anEmployee.salary) << std::endl;

	std::cout << "\n枚举类型" << std::endl;
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

	std::cout << "\n三向比较" << std::endl;
	int i { 11 };
	std::strong_ordering result { i <=>  0 };
	if (std::is_lt(result))
		std::cout << "less" << std::endl;
	if (std::is_gt(result))
		std::cout << "greater" << std::endl;
	if (std::is_eq(result))
		std::cout << "equal" << std::endl;

	std::cout << "\n函数" << std::endl;
	myFunction(8, 'a');
	myFunction(5, 's');

	std::cout << "\nArray" << std::endl;
	std::array arr { 9, 8, 7 };
	std::cout << std::format("Array size: {}", arr.size()) << std::endl;	
	std::cout << std::format("2nd element: {}", arr[1]) << std::endl;

	std::cout << "\nVector" << std::endl;
	std::vector<int> myVector { 11, 12 };
	myVector.push_back(33);
	myVector.push_back(44);
	std::cout << std::format("1st element: {}", myVector[0]) << std::endl;

	std::cout << "\nPair" << std::endl;
	std::pair<double, int> myPair { 1.23, 5 };
	std::cout << std::format("{} {}", myPair.first, myPair.second) << std::endl;

	std::optional<int> data1 { getData(true) };
	std::optional<int> data2 { getData(false) };
	std::cout << "data1.has_value = " << data1.has_value() << std::endl;
	if (data2)
		std::cout << "data2 has a value." << std::endl;

	for (int i { 0 }; i < 5; ++i){
		std::cout << "This is silly." << std::endl;
	}
}

void myFunction(int i, char c){
	std::cout << std::format("the value of i is {}", i) << std::endl;
	std::cout << std::format("the value of c is {}", c) << std::endl;
}

std::optional<int> getData(bool giveIt){
	if (giveIt)
		return 42;
	return std::nullopt;
}
