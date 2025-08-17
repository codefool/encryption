// letter frequency analysys
//
// simply count all chars from stdin, and output the alphabet with the number of occurrances
// and percentage vs. input set
//
#include <iostream>
#include <map>

void usage() {
    std::cerr << "lfa - letter frequency analysys" << std::endl;
}

typedef std::map<char, float>           _charmap;
typedef std::map<char, float>::iterator _icharmap;

_charmap m();

int main() {
    char c;
    while (!std::cin.eof()) {
        std::cin >> c;
        std::cout << c;
    }
    return 0;
}