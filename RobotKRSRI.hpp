#include "Robot.hpp"
#include "Boneka.hpp"

using namespace std;

//Buat derived class RobotKRSRI dari Robot

class RobotKRSRI : public Robot{
    private:
        //Penambahan atribut boneka untuk fungsi overload
        Boneka boneka;
    public:
        RobotKRSRI(string name, int jml_kaki, bool status);
        ~RobotKRSRI();
        void jalan();
        void padamkanApi();
        void ambilBoneka();
        
        //overload fungsi ambil boneka
        RobotKRSRI ambilBoneka(Boneka& boneka){
            bool status = getStatus();
            string name = getName();
            string doll = boneka.getDoll();
            cout << "Robot " << name << " sedang mengambil " << doll << endl;
            
        }
};

//ctor RobotKRSRI
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
    else{ //pesan error karena status robot menyala false
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
    else{//pesan error karena status robot menyala false
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
    else{//pesan error karena status robot menyala false
        cout << "Robot belum menyala!" << endl;
    }
}