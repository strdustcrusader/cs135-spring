// Task 9A: 3d-space

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p) {
    // get the values from Coord3D object that p points to
    // p is a memory address, at that memory address is a Cord3D object
    Coord3D point = *p;
    // point is equal to the object at memory address p
    cout << point.x << endl;

    double x = p -> x; // double x = (*p).x;
    double y = p -> y; // double y = (*p).y;
    double z = p -> z; // double z = (*p).z;

    // Point P's distance from the origin
    return sqrt(x*x + y*y + z*z);
}

Coord3D* fartherFromOrigin(Coord3D* p1, Coord3D* p2) {
    if (length(p1) > length(p2)) {
        return p1;
    } else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    ppos -> x = ppos -> x + pvel -> x * dt;
    ppos -> y = ppos -> y + pvel -> y * dt;
    ppos -> z = ppos -> z + pvel -> z * dt;

}

Coord3D* createCoord3D(double x, double y, double z) {
    Coord3D* coord = new Coord3D;

    coord -> x = x;
    coord -> y = y;
    coord -> z = z;

    return coord;
}

void deleteCoord3D(Coord3D *p) {
    delete p;
    p = nullptr;
}

int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
    // rahhhh
    // rahhh
    // rahh
}
