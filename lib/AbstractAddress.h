#ifndef PERSONS_ABSTRACTADDRESS_H
#define PERSONS_ABSTRACTADDRESS_H

#include <string>

using namespace std;

class AbstractAddress {
protected:
    AbstractAddress() {}

public:
    virtual string ToString() = 0;
};


#endif //PERSONS_ABSTRACTADDRESS_H
