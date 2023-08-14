/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/
#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<char, std::string> hexToBinary = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"}
    };

    std::string hexInput;
    std::string binaryOutput = "";

    std::cout << "Enter a hexadecimal number: ";
    std::cin >> hexInput;

    for (char c : hexInput) {
        binaryOutput += hexToBinary[c];
    }

    std::cout << "Binary representation: " << binaryOutput << std::endl;

    return 0;
}