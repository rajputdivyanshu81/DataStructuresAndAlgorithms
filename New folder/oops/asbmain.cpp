#include <iostream>
#include "bird.h"

void birdDoesSomething(Bird* bird) {
    bird->eat();
    bird->fly();
    bird->eat();
}

int main() {
    Bird* bird = new Eagle();
    birdDoesSomething(bird);
    delete bird; // Don't forget to clean up!
    return 0;
}
