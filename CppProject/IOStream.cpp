#include "IOStream.h"
#include<iostream>
#include<sstream>
#include<istream>
#include <fstream>

int main() {
	
	std::cin.tie(&std::cout);
	std::ostream* old_tie = std::cin.tie(nullptr);
	std::cin.tie(&std::cerr);
	std::cin.tie(old_tie);
	return 0;
}