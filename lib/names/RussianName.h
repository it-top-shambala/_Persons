#ifndef PERSONS_RUSSIANNAME_H
#define PERSONS_RUSSIANNAME_H

#include "../AbstractName.h"

class RussianName : public AbstractName {
private:
    string _family;
    string _patronymic;

public:
    RussianName(string family, string name, string patronymic) : AbstractName(name) {
        _family = family;
        _patronymic = patronymic;
    }

    string GetFullName() override {
        return _family + " " + _name + " " + _patronymic;
    }
};


#endif //PERSONS_RUSSIANNAME_H
