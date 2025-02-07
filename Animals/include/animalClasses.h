#pragma once
#ifndef ANIMALCLASSES_H
#define ANIMALCLASSES_H

#include <iostream>

// Base class
class Animal {
public: 
    virtual void speak() const = 0; // Pure virtual function
    virtual ~Animal() {} // Virtual destructor 

};

// Derived class: Dog 
class Dog : public Animal {
public:
    void speak() const override;
};

// Derived class: Cat 
class Cat : public Animal {
public: 
    void speak() const override;
};

// Derived class: Budgie 
class Budgie : public Animal {
public: 
    void speak() const override;
};

#endif // ANIMALCLASSES_H
