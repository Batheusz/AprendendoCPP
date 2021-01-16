#include <iostream>
#ifndef DESTRUCTORS_H
#define DESTRUCTORS_H

class ConstructorAndDestructor
{
public:
    ConstructorAndDestructor(int, std::string); // Construtor
    ~ConstructorAndDestructor(); // Destrutor

private:
    int objectID;
    std::string message;
};


#endif
