#include <iostream>
#include <chrono>
#include <thread>
#include <string.h>
#include <fstream>
#include "boxies.hpp"
#define CARDS 16

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
	int already_used = 0;
	while (input[i])
	{
		int j = 0;
		while (input[i] != '\n')
		{
			j = j * 10 + (input[i] - '0');
			i++;
		}
		already_used++;
		crds[j] = 1;
		i++;
	}
	ofstream ofs;
	if (already_used == CARDS)
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
	ofs << ran << endl;
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
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	cout << boxy1 << endl;
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	cout << boxy2 << endl;
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	cout << boxy3 << endl;
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	cout << boxy4 << endl;
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	cout << boxy5 << endl;
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	
	int card = pickACard();
	std::string news[] = {"There has not been a corona outbreak at Codam.",\
    "We were able to host 3 piscines during the pandemic.",\
    "We welcomed a new cohort!",\
    "There was a panda born in Ouwehands Dierenpark. :)",\
    "An elephant was born in Artis.",\
    "A 100-Year-Old Tortoise Saved His Species!",\
    "Whales returned to New York City",\
    "Lions were born in Amersfoort Zoo.", \
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

	print_card(news[card], name);
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	print_card2(news[card], name);
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	print_card(news[card], name);
	this_thread::sleep_for(chrono::seconds(0));
	system("clear");
	print_card2(news[card], name);
	this_thread::sleep_for(chrono::seconds(0));

	return (0);
}
