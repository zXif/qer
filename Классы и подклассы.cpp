#include <iostream>
#include <string>


using namespace std;

class Hat {

protected:
    string color;


public:

    Hat() {
        color;

    }

    Hat(string color, string male, string female) {
        this->color = color;

    }

    Hat(Hat *rect) {
        color = rect->color;

    }

    ~Hat() {}

    void setHat();
    void getHat();
    void chose();

};

    class CapHat : protected Hat{

    protected:
        string position;

    public:
        CapHat();
        CapHat( string color, string male, string female );

        ~CapHat() {}
        void setPosition();
        void getPosition();
    };

    CapHat::CapHat(){
        position = "NULL";
    }

CapHat::CapHat( string color, string male, string female ) {

    this->position = position;
}


void Hat::setHat() {
    cout << "Enter a color " << endl;
    cin >> color;

}
void Hat::chose() {
    cout << "Chose a  hat, press '1' or '2' " << endl;
    int gender;
    cin >> gender;

    switch (gender){
        case 1:{
            cout << "Hat is for female." << endl;
            break;
        }
        case 2:{
            cout << "Hat is for male." << endl;
            break;
        }

        default:{
            cout << "Incorrect chose " << endl;
        }

    }
}

void Hat::getHat() {
    cout << "Color is " << color << endl;

}


void CapHat::setPosition() {
    cout << "Enter a position of cap:" << endl;
    cin >> position;

}

void CapHat::getPosition() {
    cout << "Position is " << position << endl;

}





int main(){
    Hat sambrero;
    sambrero.getHat();
    Hat* R;
    R = new Hat;

    Hat rect = new Hat;
    rect.getHat();
    R->setHat();
    R->getHat();
    R->chose();
    delete R;

    CapHat* Cap;
    Cap = new CapHat;
    Cap->setPosition();
    Cap->getPosition();

    return 0;
}