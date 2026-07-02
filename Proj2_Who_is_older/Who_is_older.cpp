#include <iostream>
#include <string>

// getusername function
// getUserAge function
// compare users age
// print final statement

std::string getUserName(int x)
{
	std::cout << "Enter the name of person #" << x << ": ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	return name;
}

int getUserAge(std::string_view user)
{
	std::cout << "Enter the age of " << user << ": ";
	int age{};
	std::cin >> age;
	return age;
}

void compareAgesAndPrintResult(int age1, int age2, std::string_view name1, std::string_view name2)
{
	if (age1 == age2)
		std::cout << "Both people have the same age of " << age1 << ".";
	else if (age1 > age2)
		std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").";
	else
		std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").";

}

int main()
{
	int x{ 1 };
	std::string nameP1{ getUserName(x) };
	int ageP1{ getUserAge(nameP1) };

	x = 2;
	std::string nameP2{ getUserName(x) };
	int ageP2{ getUserAge(nameP1) };

	compareAgesAndPrintResult(ageP1, ageP2, nameP1, nameP2);

	return 0;

}