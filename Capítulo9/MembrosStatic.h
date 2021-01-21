#include <iostream>

#ifndef MEMBROSSTATIC_H
#define MEMBROSSTATIC_H

class Empregado
{
public:
    Empregado(const std::string&, const std::string&);
    ~Empregado();
    std::string getFirstName() const;
    std::string getLastName() const;
    static unsigned int getCount();
private:
    std::string firstName;
    std::string lastName;
    static unsigned int count;
};

#endif