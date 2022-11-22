#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile("input.txt");
    int count = 0;
    std::string number1;
    std::string number2;
    std::getline(inFile, number1, '\n');
    std::cout<< number1 << std::endl;
    while(getline(inFile, number2, '\n')){
        if(stoi(number1) < stoi(number2)){
            std::cout<< number2 << " (Increased)" << std::endl;
            count++;
        } else {
            std::cout<< number2 << " (Decreased)" <<std::endl;
        }
        number1 = number2;
    }
    std::cout << count;
    return 0;
}
