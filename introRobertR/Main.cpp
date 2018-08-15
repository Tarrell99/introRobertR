#include <iostream>
#include <string>

int main()
{
	std::string Myname1 = "Robert Riley";
	std::string Myname2 = "Tarrell";
	std::string Id = "s188039";
	std::string one = "1+1";
	std::string two = "=2";
	std::cout << "Myname:" << Myname1 << std::endl;
	std::cout << Myname1 << " " << Myname2 << std::endl;
	std::cout << "Id:" << Id << std::endl;
	std::cout << one + two << std::endl;
	std::cout << one + two << Myname1 << " " << Myname2 << std::endl;

	std::string FirstName;
	std::string LastName;
	std::cout << " enter your FirstNmae " + FirstName << std::endl;
	std::cin >> FirstName;
	std::cout << "enter Your LastName" + LastName << std::endl;
	std::cin >> LastName;
	std::cout << "Hi; " + FirstName + " " + LastName << std::endl;


	system("pause");
}