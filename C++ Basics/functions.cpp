#include <iostream>
using namespace std;

// Function to calculate damage
int calculateDamage(int attackPower, int defense) {
    return attackPower - defense;
}

// Function to level up a character
int levelUp(int currentLevel) {
    return currentLevel + 1;
}

int main() {
    int attackPower = 50;
    int defense = 20;

    int damage = calculateDamage(attackPower, defense);
    cout << "Damage dealt: " << damage << endl;

    int currentLevel = 5;
    int newLevel = levelUp(currentLevel);
    cout << "New level: " << newLevel << endl;

    return 0;
}
