// hello
#include <iostream>
using namespace std;

class Circuit {
    private:
    int switchone = 0;
    int switchtwo = 0;
    int l = 0;

    public:
    int get_first_switch_state() {return switchone;}
    int get_second_switch_state() {return switchtwo;}
    int get_lamp_state() {return l;}
    void toggle_first_switch() {
        switchone = 1 - switchone; 
        l = switchone != switchtwo;
    }
    void toggle_second_switch() {
        switchtwo = 1 - switchtwo;
        l = switchone != switchtwo; 
    }
};