#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <string>

using namespace std;

//Buat class abstrak robot
class Robot {
    private:
        string name;
        int jml_kaki;
        bool status;
    public:
        Robot(string name, int jml_kaki, bool status);
        ~Robot();
        void nyala();
        void mati();
        bool getStatus();
        string getName();
        virtual void jalan() = 0;
};

Robot::Robot(string name, int jml_kaki, bool status)
{
    this->name = name;
    this->jml_kaki = jml_kaki;
    this-> status = status;
}

Robot::~Robot()
{
}

void Robot::nyala()
{
    this->status = true;
    cout << "Robot " << name << " sudah menyala" << endl;
}

void Robot::mati()
{
    this->status = false;
    cout << "Robot " << name << " belum menyala" << endl;
}

bool Robot::getStatus()
{
    return this->status;
}

string Robot::getName()
{
    return this->name;
}
#endif