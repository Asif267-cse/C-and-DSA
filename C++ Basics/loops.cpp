#include <iostream>

int main() {
    // For loop example: defeat 10 enemies in a row
    for (int i = 1; i <= 10; i++) {
        std::cout << "Enemy " << i << " defeated!" << std::endl;
    }

    int healthPoints = 100;

    // While loop example: keep fighting until health drops to zero
    while (healthPoints > 0) {
        std::cout << "Fighting... Health Points: " << healthPoints << std::endl;
        healthPoints -= 20; // Decrease health points by 20 each time
    }

    std::cout << "Health dropped to zero, game over!" << std::endl;

    return 0;
}
