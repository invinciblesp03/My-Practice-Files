#include <iostream>

void drawSquare(int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int size;

    // Get the size of the square from the user
    std::cout << "Enter the size of the square: ";
    std::cin >> size;

    // Draw the square
    drawSquare(size);

    return 0;
}