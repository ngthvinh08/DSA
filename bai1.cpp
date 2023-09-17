#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::reverse(sentence.begin(), sentence.end());
    std::cout << sentence << std::endl;
    return 0;
}
