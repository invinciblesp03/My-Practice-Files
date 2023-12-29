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
    int length;

    // Get the size of the square from the user
    std::cout << "Enter the size of the square: ";
    std::cin >> length;

    // Draw the square
    drawSquare(length);

    return 0;
}
// The above code create a square with the desired size from the user
