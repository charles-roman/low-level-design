#include <iostream>
#include <string>

class Dog {
private:  // Private members: accessible only within the class
    std::string name;  // Instance attribute

protected:  // Protected members: accessible in this class and derived classes
    void displayBreedMessage() const {
        std::cout << name << " belongs to a specific breed." << std::endl;
    }

public:  // Public members: accessible from outside the class
    static int dogCount;  // Class (static) attribute

    // Constructor
    Dog(const std::string& dogName) {
        // Attribute validation
        if (dogName.empty()) {
            name = "Unnamed";
        } else {
            name = dogName;
        }
        dogCount++;
    }

    // Copy constructor
    Dog(const Dog& other) {
        name = other.name;
        dogCount++;
    }

    // Destructor
    ~Dog() {
        dogCount--;
    }

    // Copy assignment operator
    Dog& operator=(const Dog& other) {
        if (this != &other) {
            name = other.name;
        }
        return *this;
    }

    // Public getter method
    std::string getName() const {
        return name;
    }

    // Public setter method
    void setName(const std::string& newName) {
        if (!newName.empty()) {
            name = newName;
        }
    }

    // Custom instance method
    void bark() const {
        std::cout << name << " says: Woof!" << std::endl;
    }

    // Custom class method
    static int getDogCount() {
        return dogCount;
    }
};