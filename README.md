
# Password Generator

This is a simple C++ program for generating random passwords based on user-defined length and character sets. It allows you to create strong, randomized passwords for various purposes.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [How to Run](#how-to-run)
- [Customization](#customization)
- [Contributing](#contributing)
- [License](#license)

## Features

- Generates random passwords of specified length.
- Supports customization of character sets (letters, digits, special characters).
- Uses a secure random number generator.
- Simple and easy-to-use command-line interface.

## Usage

This password generator is useful for creating secure passwords for online accounts, software, or any application where strong authentication is required.

## Prerequisites

- C++ compiler (e.g., g++ or clang++)
- C++11 or later standard library
- Git (optional)

## Installation

You can clone this repository using the following command:

```bash
git clone https://github.com/CarlosUriass/password-generator-cpp-.git
```

## How to Run

1. Navigate to the directory where you've cloned this repository.

2. Compile the source code:

   ```bash
   g++ -o password-generator main.cpp
   ```

3. Run the program:

   ```bash
   ./password-generator
   ```

4. Follow the on-screen prompts to specify the desired password length.

5. Your generated password will be displayed on the screen.

## Customization

You can customize the character set used to generate passwords by modifying the `generateAlphabet` function in the `main.cpp` file. Simply add or remove characters from the alphabet string to suit your needs.

```cpp
std::string generateAlphabet(){
    std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:,.<>?";
    return alphabet;
}
```

## Contributing

Contributions are welcome! If you have ideas for improvements or find any issues, please open an issue or create a pull request. For major changes, please discuss them in an issue first.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
