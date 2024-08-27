// bird.h:

#ifndef BIRD_H
#define BIRD_H

#include <iostream>

class Bird {
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // A class that inherits this class
    // has to implement the pure virtual functions
};

class Sparrow : public Bird {
public:
    void eat() override {
        std::cout << "Sparrow is eating\n";
    }
    void fly() override {
        std::cout << "Sparrow is flying\n";
    }
};

class Eagle : public Bird {
public:
    void eat() override {
        std::cout << "Eagle is eating\n";
    }
    void fly() override {
        std::cout << "Eagle is flying\n";
    }
};

#endif
