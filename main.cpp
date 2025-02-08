#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Horse.h"

const int numHorses = 5;  // Number of horses
const int maxPos = 15;    // Max position (finish line)

int main() {
    // Create an array of Horse objects
    Horse horses[numHorses];

    // Set up random number generation
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 1);  // Random 0 or 1 (50% chance to move forward)

    // Initialize the horses with their index and the track length
    for (int i = 0; i < numHorses; ++i) {
        horses[i].setParameters(i, maxPos);
    }

    bool raceOver = false;

    // Game loop
    while (!raceOver) {
        // Randomly decide whether to advance each horse
        for (int i = 0; i < numHorses; ++i) {
            // Simulate a random coin flip to decide whether to move the horse
            bool coin = dist(rd);  // Randomly returns 0 or 1
            if (coin) {
                horses[i].advance();  // Advance the horse if coin is 1
            }
        }

        // Print the lanes after this round
        for (int i = 0; i < numHorses; ++i) {
            horses[i].printLane();  // Print the race track for each horse
        }

        // Check if any horse has won
        raceOver = false;  // Assume the race isn't over yet
        for (int i = 0; i < numHorses; ++i) {
            if (horses[i].isWinner()) {
                std::cout << "Horse " << i << " WINS!!!" << std::endl;
                raceOver = true;  // Set raceOver to true if we find a winner
                break;  // Exit the loop as soon as a winner is found
            }
        }

        // If the race isn't over, wait for user input to proceed to the next turn
        if (!raceOver) {
            std::cout << "Press Enter for the next turn..." << std::endl;
            std::cin.ignore();  // Ignore any leftover input in the buffer
            std::cin.get();     // Wait for the user to press Enter
        }
    }

    return 0;
}

