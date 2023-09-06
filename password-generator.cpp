#include<iostream>
#include <string>
#include<random>

// Function to generate the alphabet (letters, digits, and special characters)
std::string generateAlphabet(){
    std::string alphabet = "";
    for(char letter = 'A'; letter <= 'Z'; letter++){
        alphabet += letter;
    }

    for (char letter = 'a'; letter <= 'z'; letter++){
        alphabet += letter;
    }

    for(char digit = '0'; digit <= '9'; digit++){
        alphabet += digit;
    }

    alphabet += "!@#$%^&*()-_=+[]{}|;:,.<>?"; // Special characters
    return alphabet;
}

// Function to generate a random password of a specified length using the provided alphabet
std::string generatePassword(int length, std::string alphabet){
    std::string password = "";
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(0, alphabet.length() - 1);

    for (int i = 0; i < length; i++) {
        int randomIndex = distribution(generator); // Get a random index in the alphabet
        password += alphabet[randomIndex]; // Add the corresponding character from the alphabet to the password
    }

    return password;
}

int main(){
    int length; 
    std::cout << "Welcome to the password generator" << std::endl;
    std::cout << "What is the length of your password?";
    std::cin >> length;

    std::string alphabet = generateAlphabet();
    std::string password = generatePassword(length, alphabet);

    std::cout << "Generated password: " << password << std::endl;
    return 0;
}
