#include "adsb.pb.h"
#include "cdti.pb.h"
#include "ownship.pb.h"
#include "radar.pb.h"
#include "tcas.pb.h"

#include <iostream>
#include "foo.h"

using namespace std;

int main() {
    cout << "Hello, Sense and Avoid Surveillance Processor!" << endl;

    foo foolish;
    return foolish.getZero();
}