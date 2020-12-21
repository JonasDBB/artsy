#include <iostream>
#include <chrono>
#include <thread>
#include <string.h>
#include <fstream>
#include "boxies.hpp"
#define CARDS 5

void		print_card(std::string news, std::string name);

using namespace std;

int pickACard(void)
{
	ifstream ifs("checkcards.txt");
	if (!ifs.is_open())
	{
		ofstream tmp("checkcards.txt");
		tmp.close();
		ifs.open("checkcards.txt");
	}
	char crds[CARDS];
	for (int i = 0; i < CARDS; i++)
		crds[i] = 0;
	string input((istreambuf_iterator<char>(ifs)), istreambuf_iterator<char>());
	ifs.close();
	int i = 0;
	while (input[i])
	{
		int j = input[i] - '0';
		crds[j] = 1;
		i++;
	}
	ofstream ofs;
	if (i == 5)
	{
		ofs.open("checkcards.txt", ios::trunc);
			for (int i = 0; i < CARDS; i++)
		crds[i] = 0;
	}
	else
		ofs.open("checkcards.txt", ios::app);
	int ran = rand() % CARDS;
	while (crds[ran])
		ran = rand() % CARDS;
	ofs << ran;
	ofs.close();
	return (ran);
}

int	main(void)
{
	srand(time(NULL));
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
	int card = pickACard();

	
	
	// print_card("jonas is cool :)", "Jonas");
	// this_thread::sleep_for(chrono::seconds(2));
	return (0);
}
