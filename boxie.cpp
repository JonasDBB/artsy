#include <iostream>
#include <chrono>
#include <thread>
#include <string.h>
#include <fstream>
#include "boxies.hpp"
#define CARDS 19

void		print_card(std::string news, std::string name);
void		print_card2(std::string news, std::string name);
void		intro(void);

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

int	main(int argc, char **argv)
{
	std::string name;
	if (argc < 2)
		name = "Everyone";
	else
		name = argv[1];
	srand(time(NULL));
	system("clear");
	intro();
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
	
	int card;
	std::string news[] = {"There has not been a corona outbreak at Codam.",\
    "We were able to host 3 piscines during a pandemic.",\
    "We welcomed a new cohort!",\
    "There was a panda born in Ouwehands Dierenpark. 🐼",\
    "An elephant was born in Artis. 🐘",\
    "A 100-Year-Old Tortoise Saved His Species! 🐢",\
    "Whales returned to New York City. 🐳",\
    "Lions were born in Amersfoort Zoo. 🦁", \
    "Jupiter and Saturn aligned again. The last time was 1623!",\
    "No new cases of wild poliovirus recorded since 2016.",\
    "Sweden went coal-free.",\
    "Lower air pollution during lockdown said to improve crops",\
    "Cat missing for three years was reunited with UK owner.",\
	"Victor Glover first black long-term astronaut at ISS.",\
	"Lower air pollution may improve crop production.",\
	"Number of unemployed people drops for third month in row.",\
	"Pet adoptions have increased dramatically.",\
	"Mother Nature is getting a much-needed respite.",\
	"Netherlands winner of Eurovision for second year in row."};

	int exit = 0;
	int i = 0;
	std::string next;
	while (exit != -1)
	{
		if (i == CARDS)
		{
			std::cout << "Those were all the cards!\nMerry Christmas and Happy New Year!!" << std::endl;
			break;
		}
		card = pickACard();
		print_card(news[card], name);
		this_thread::sleep_for(chrono::seconds(1));
		system("clear");
		print_card2(news[card], name);
		this_thread::sleep_for(chrono::seconds(1));
		system("clear");
		print_card(news[card], name);
		this_thread::sleep_for(chrono::seconds(1));
		system("clear");
		print_card2(news[card], name);
		this_thread::sleep_for(chrono::seconds(2));
		while (next != "\n")
		{
			std::cout << "Take another card!\n\t(　･ω･)☞ *press enter*" << std::endl;
			next = std::cin.get();
			if (next != "\n")
			{
				exit = -1;
				break;
			}
			system("clear");	
		}
		i++;
		next = "";
	}
	return (0);
}
