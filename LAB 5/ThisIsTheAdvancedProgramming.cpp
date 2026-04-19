#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream file("input.txt");
    string fileData;
    getline(file, fileData);
    file.close();
    
    cout << "Original: " << fileData << endl;
    
    // Count vowels
    int vowels = 0;
    for (size_t i = 0; i < fileData.size(); i++) {
        char ch = (char)tolower((unsigned char)fileData[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    
    // Count words
    int words = 1;
    for (size_t i = 0; i < fileData.size(); i++) {
        if (fileData[i] == ' ') {
            words++;
        }
    }
    cout << "Words: " << words << endl;
    
    // Reverse
    string reversed;
    for (size_t i = fileData.size(); i-- > 0; ) {
        reversed.push_back(fileData[i]);
    }
    cout << "Reversed: " << reversed << endl;
    
    // Capitalize second letter
    string result;
    int letterPos = 0;
    for (size_t i = 0; i < fileData.size(); i++) {
        if (fileData[i] == ' ') {
            result.push_back(' ');
            letterPos = 0;
        } else {
            if (letterPos == 1) {
                result.push_back((char)toupper((unsigned char)fileData[i]));
            } else {
                result.push_back(fileData[i]);
            }
            letterPos++;
        }
    }
    cout << "2nd letter capitalized: " << result << endl;
    
    return 0;
}