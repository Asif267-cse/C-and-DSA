#include <iostream>
#include <string>

using namespace std;

int main() {
    int healthPoints = 100;          // Integer for health points
    string playerName = "Asif";      // String for player's name
    float playerSpeed = 5.5;         // Float for player's speed
    bool isAlive = true;             // Boolean to check if player is alive

    // Displaying the values
    cout << "Player Name: " << playerName << endl;
    cout << "Health Points: " << healthPoints << endl;
    cout << "Player Speed: " << playerSpeed << endl;
    cout << "Is Alive: " << boolalpha << isAlive << endl;

    return 0;
}
