#include <iostream>
#include <chrono>
#include <thread>
#include <string.h>
#include "boxies.hpp"

void		print_card(std::string news, std::string name);
void		print_card2(std::string news, std::string name);

using namespace std;

int	main(void)
{
	system("clear");
	cout << boxy0 << endl;
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	cout << boxy1 << endl;
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	cout << boxy2 << endl;
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	cout << boxy3 << endl;
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	cout << boxy4 << endl;
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	cout << boxy5 << endl;
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	print_card("Jonas is cool :)", "Jonas");
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	print_card2("Jonas is cool :)", "Jonas");
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	print_card("Jonas is cool :)", "Jonas");
	this_thread::sleep_for(chrono::seconds(1));
	system("clear");
	print_card2("Jonas is cool :)", "Jonas");
	this_thread::sleep_for(chrono::seconds(2));
	return (0);
}
