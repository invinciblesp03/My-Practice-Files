#include <iostream>


int main() {
    int height;

    // Get the height of the triangle from the user
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Validate input
    if (height <= 0) {
        std::cerr << "Invalid input. Please enter a positive integer for the height." << std::endl;
        return 1; // Exit with an error code
    }

    // Print the triangle
    for (int i = 1; i <= height; ++i) {
        // Print spaces
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0; // Exit successfully
}