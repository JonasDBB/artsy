#include <iostream>
#include <unistd.h>

int main()
{
    std::string happ[] = {"There has not been a corona outbreak at Codam.",\
    "We were able to host 3 piscines during the pandemic.",\
    "We welcomed a new cohort!",\
    "There was a panda born in Ouwehands Dierenpark. :)",\
    "An elephant was born in Artis.",\
    "100-Year-Old Tortoise Saved His Species",\
    "Whales returned to New York City",\
    "Lions were born in Amersfoort.", \
    "Jupiter and Saturn aligned again. The last time was 1623!",\
    "No new cases of wild poliovirus recorded since 2016.",\
    "Sweden went coal-free.",\
    "Lower air pollution during lockdown said to improve crops",\
    "Cat missing for three years was reunited with UK owner.",\
	"Victor Glover became first black long-term astronaut at ISS.",\
	"Lower air pollution may improve crop production",\
	"Number of unemployed people drops for third month in a row.",\
	"Pet adoptions have increased dramatically.",\
	"Mother Nature is getting a much-needed respite.",\
	"Netherlands is winner of Eurovision for second year in a row."}

    for (int i = 0; i < 19; i++)
        std::cout << happ[i] << std::endl;
    //"Victor J. Glover Jr. became the first Black astronaut to embark on a long-term stay at the ISS."
    return (0);
}
