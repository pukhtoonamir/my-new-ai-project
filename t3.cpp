#include<iostream>
using namespace std;
// Base Class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptr;

    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();   // Calls Dog's sound()

    ptr = &c;
    ptr->sound();   // Calls Cat's sound()

    return 0;}
