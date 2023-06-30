//Программа Global Reach

#include <iostream>
using namespace std;

int glob = 10; // глобальная переменнная 
void access_global(); // объявление функции access_global
void high_global(); // объявление функции high_global 
void change_global(); // объявление функции change_global

int main()
{
	cout << "In main glob() is: " << glob << "\n\n"; // вывод переменной glob
	access_global(); // обращение к функции access_global()
	high_global(); // обращение к фукнции high_global()
	cout << "In main() glob is: " << glob << "\n\n"; // вывод новой переменной glob
	change_global(); // обращение к новой функции change_global()
	cout << "In main() glob is: " << glob << "\n\n"; // вывод переназначенной переменной 
	return 0;
}
void access_global()
{
	cout << "In access_global() glob is: " << glob << "\n\n";
}
void high_global()
{
	int glob = 0; // скрываем глобальную переменную glob 
	cout << "In hide_global() glob is: " << glob << "\n\n";
}
void change_global()
{
	glob = -10; // изменяем глобальную переменную glob 
	cout << "In change_global() glob is: " << glob << "\n\n";
}