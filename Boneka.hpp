#ifndef BONEKA_H
#define BONEKA_H
#include <iostream>
#include <string>
using namespace std;

//Buat class Boneka
class Boneka{
    private:
        string name;
    public:
        Boneka();
        Boneka(string name);
        ~Boneka();
        string getDoll();
};

Boneka::Boneka()
{
    this->name = "teddyBear";
}

Boneka::Boneka(string name)
{
    this->name = name;
}

Boneka::~Boneka()
{
}

string Boneka::getDoll()
{
    return this->name;
}

#endif