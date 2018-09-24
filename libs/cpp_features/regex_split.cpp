#include <regex> 
#include <iostream>
#include <vector>
#include <string>

namespace RegexSplit {

// Taken from: https://stackoverflow.com/questions/9435385/split-a-string-using-c11
std::vector<std::string> split(const std::string& input, const std::string& regex) {
    // passing -1 as the submatch index parameter performs splitting
    std::regex re(regex);
    std::sregex_token_iterator
        first{input.begin(), input.end(), re, -1},
        last;
    return {first, last};
}

void RegexSplit()
{
    {
        std::cout << "RegexSplitSpaces" << std::endl;
        auto splits = split("abcd efgh ijkl", "\\s+");
        for (auto split: splits) 
        {
            std::cout << split << std::endl;
        }
    }
	{
        std::cout << "RegexSplitCommas" << std::endl;
        auto splits = split("abcd,efgh,ijkl", ",");
        for (auto split: splits) 
	{
		std::cout << split << std::endl;
	}
	}
}

}
