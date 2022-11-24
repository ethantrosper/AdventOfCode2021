#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream inFile("input.txt");
    int horizontal = 0;
    int depth  = 0;
    string line;
    string direction;
    while(getline(inFile, line, ' ' )){
        direction = line;
        if(direction == "forward"){
            getline(inFile, line, '\n');
            horizontal += stoi(line);
        } else if(direction == "up"){
            getline(inFile, line, '\n');
            depth -= stoi(line);
        } else {
            getline(inFile, line, '\n');
            depth += stoi(line);
        }
    }
    cout << horizontal * depth;

    return 0;
}
