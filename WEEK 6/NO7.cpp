#include <iostream>
#include <string>

int main() {
    std::string word;
    char findChar;
    bool isFound = false;

    std::cout << "Enter a Word: ";
    std::cin >> word;

    std::cout << "Enter the character you want to find: ";
    std::cin >> findChar;

    for (int idx = 0; idx < word.length(); idx++) {
        if (word[idx] == findChar) {
            isFound = true;
            break; // Character found, no need to continue searching
        }
    }

    if (isFound) {
        std::cout << "'" << findChar << "' is found in '" << word << "'" << std::endl;
    } else {
        std::cout << "'" << findChar << "' is not found in '" << word << "'" << std::endl;
    }

    return 0;
}