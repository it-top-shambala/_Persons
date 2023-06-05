#ifndef PERSONS_PERSON_H
#define PERSONS_PERSON_H

#include <string>

#include "AbstractName.h"
#include "AbstractAddress.h"
#include "Phone.h"

using namespace std;

class Person {
private:
    AbstractName* _name;
    AbstractAddress* _address;
    Phone* _phone;

public:
    Person(AbstractName* name, AbstractAddress* address, Phone* phone)
        : _name(name), _address(address), _phone(phone) {}

    AbstractName* GetName() const {
        return _name;
    }

    AbstractAddress* GetAddress() const {
        return _address;
    }

    Phone* GetPhone() const {
        return _phone;
    }
};


#endif //PERSONS_PERSON_H
