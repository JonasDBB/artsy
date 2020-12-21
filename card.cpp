/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   card.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:50:56 by rixt          #+#    #+#                 */
/*   Updated: 2020/12/21 20:21:55 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


void		print_card(std::string news, std::string name)
{
	int newslen = news.length();
	int namelen = name.length();
	
	std::cout << "_______________________________________________________________\n";
	
	std::cout << "|   .-.*.-.   .-.*.-.   .-.*.-.   .-.*.-.   .-.*.-.   .-.*.-.  |\n";
	std::cout << "|\\ / /   \\ \\ / /   \\ \\ / /   \\ \\ / /   \\ \\ / /   \\ \\ / /   \\ \\ |\n";
	std::cout << "|-`-'     `-`-'     `-`-'     `-`-'     `-`-'     `-`-'     `-`|\n";
	std::cout << "|                                                              |\n";
	std::cout << "|    Dear " << name << ",";
	for (int i = 0; i < 52-namelen; i++)
		std::cout << " ";
	std::cout << "|\n";
	std::cout << "|                                                              |\n";
	std::cout << "|    Now for something positive:                               |\n";
	std::cout << "|                                                              |\n";
	std::cout << "|    " << news;
	for (int i = 0; i < 58-newslen; i++)
		std::cout << " ";
	std::cout << "|\n";
	std::cout << "|                                                              |\n";
	std::cout << "|    Sincerely,                                                |\n";
	std::cout << "|    Santa                                                     |\n";
	std::cout << "|                                                              |\n";
	std::cout << "|   .-.*.-.   .-.*.-.   .-.*.-.   .-.*.-.   .-.*.-.   .-.*.-.  |\n";
	std::cout << "|\\ / /   \\ \\ / /   \\ \\ / /   \\ \\ / /   \\ \\ / /   \\ \\ / /   \\ \\ |\n";
	std::cout << "|-`-'     `-`-'     `-`-'     `-`-'     `-`-'     `-`-'     `-`|\n";
	std::cout << "|______________________________________________________________|\n";
}


int			main(void)
{
	print_card("hello this is news", "Rixt");
	return(0);
}
