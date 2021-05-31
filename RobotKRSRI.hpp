#include "Robot.hpp"

using namespace std;

//Buat derived class dari robot

class RobotKRSRI : public Robot{
    public:
        RobotKRSRI(string name, int jml_kaki, bool status);
        ~RobotKRSRI();
        void jalan();
        void padamkanApi();
        void ambilBoneka();
};

RobotKRSRI::RobotKRSRI(string name, int jml_kaki, bool status) : Robot(name, jml_kaki, status)
{
}

RobotKRSRI::~RobotKRSRI()
{
}

void RobotKRSRI::jalan()
{
    bool status = getStatus();
    string name = getName();
    if (status == true){
        cout << "Robot " << name << " sedang berjalan" << endl;
    }
    else{
        cout << "Robot belum menyala!" << endl;
    }
}

void RobotKRSRI::padamkanApi()
{
    bool status = getStatus();
    string name = getName();
    if (status == true){
        cout << "Robot " << name << " sedang memadamkan api" << endl;
    }
    else{
        cout << "Robot belum menyala!" << endl;
    }
}

void RobotKRSRI::ambilBoneka()
{
    bool status = getStatus();
    string name = getName();
    if (status == true){
        cout << "Robot " << name << " sedang mengambil boneka" << endl;
    }
    else{
        cout << "Robot belum menyala!" << endl;
    }
}