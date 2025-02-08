#include "Horse.h"
#include <iostream>

// Constructor to initialize the horse's position, index, and track length
Horse::Horse() {
    position = 0;  // All horses start at position 0
    index = -1;    // Default index, will be set later
    trackLength = 15;  // Default track length
}

// Set the horse's index and the track length
void Horse::setParameters(int newIndex, int newTrackLength) {
    index = newIndex;
    trackLength = newTrackLength;
}

// Move the horse one step forward
void Horse::advance() {
    if (position < trackLength) {
        position++;
    }
}

// Print the horse's position on the track (its lane)
void Horse::printLane() {
    for (int i = 0; i <= trackLength; ++i) {
        if (i == position) {
            std::cout << index;  // Print the horse number at its position
        } else {
            std::cout << ".";  // Empty space
        }
    }
    std::cout << std::endl;
}

// Check if the horse has reached the finish line
bool Horse::isWinner() {
    return position == trackLength;
}

