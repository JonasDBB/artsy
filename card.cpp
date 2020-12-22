/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   card.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:50:56 by rixt          #+#    #+#                 */
/*   Updated: 2020/12/22 09:37:19 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define GR	"\033[38;5;46m"
#define YW	"\033[38;5;220m"
#define RD	"\033[38;5;196m"
#define CL	"\033[0m"

void		print_card(std::string news, std::string name)
{
	int newslen = news.length();
	int namelen = name.length();

	std::cout << RD << ".______________________________________________________________.\n";
	std::cout << "|                                                              |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << "   " << GR << ".-." << YW << "*" << GR << ".-." << RD;
	std::cout << "  |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "\\ / /   \\ ";
	std::cout << "\\" << RD << " |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "-`-'     `";
	std::cout << "-`" << RD << "|\n";

	std::cout << "|                                                              |\n";
	std::cout << RD << "|" << CL << "    Dear " << name << ",";
	for (int i = 0; i < 52-namelen; i++)
		std::cout << " ";
	std::cout << RD << "|\n";

	std::cout << "|                                                              |\n";
	std::cout << "|" << CL << "    Positive news from 2020:                         .        " << RD << "|\n";
	std::cout << "|                                                              |\n";
	std::cout << "|    " << CL << news;
	for (int i = 0; i < 58-newslen; i++)
		std::cout << " ";
	std::cout << RD << "|\n";
	std::cout << "|" << CL << "                                 +                  *         " << RD << "|\n";
	std::cout << "|" << CL << "    Sincerely,       *                     .                  " << RD << "|\n";
	std::cout << "|" << CL << "    Santa                 .                      o            " << RD << "|\n";
	std::cout << "|                                                              |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << "   " << GR << ".-." << YW << "*" << GR << ".-." << RD;
	std::cout << "  |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "\\ / /   \\ ";
	std::cout << "\\ " << RD  << "|\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "-`-'     `";
	std::cout << "-`" << RD << "|\n";

	std::cout << "|______________________________________________________________|\n" << CL;
}



void		print_card2(std::string news, std::string name)
{
	int newslen = news.length();
	int namelen = name.length();

	std::cout << RD << ".______________________________________________________________.\n";
	std::cout << "|                                                              |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << "   " << GR << ".-." << YW << "*" << GR << ".-." << RD;
	std::cout << "  |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "\\ / /   \\ ";
	std::cout << "\\" << RD << " |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "-`-'     `";
	std::cout << "-`" << RD << "|\n";

	std::cout << "|                                                              |\n";
	std::cout << RD << "|" << CL << "    Dear " << name << ",";
	for (int i = 0; i < 52-namelen; i++)
		std::cout << " ";
	std::cout << RD << "|\n";

	std::cout << "|                                                              |\n";
	std::cout << "|" << CL << "    Positive news from 2020:                         o        " << RD << "|\n";
	std::cout << "|                                                              |\n";
	std::cout << "|    " << CL << news;
	for (int i = 0; i < 58-newslen; i++)
		std::cout << " ";
	std::cout << RD << "|\n";
	std::cout << "|" << CL << "                                 *                  .         " << RD << "|\n";
	std::cout << "|" << CL << "    Sincerely,       .                     +                  " << RD << "|\n";
	std::cout << "|" << CL << "    Santa                 +                      *            " << RD << "|\n";
	std::cout << "|                                                              |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << "   " << GR << ".-." << YW << "*" << GR << ".-." << RD;
	std::cout << "  |\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "\\ / /   \\ ";
	std::cout << "\\ " << RD  << "|\n";

	std::cout << "|";
	for (int i = 0; i < 6; i++)
		std::cout << GR << "-`-'     `";
	std::cout << "-`" << RD << "|\n";

	std::cout << "|______________________________________________________________|\n" << CL;
}

// int			main(void)
// {
// 	print_card("hello this is news", "Rixt");
// 	return(0);
// }
