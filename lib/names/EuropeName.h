#ifndef PERSONS_EUROPENAME_H
#define PERSONS_EUROPENAME_H

#include "../AbstractName.h"

class EuropeName : public AbstractName {
private:
    string _second_name;
    string _last_name;

public:
    EuropeName(string first_name, string second_name, string last_name) : AbstractName(first_name) {
        _second_name = second_name;
        _last_name = last_name;
    }

    string GetFullName() override {
        return _name + " " + _second_name + " " + _last_name;
    }
};


#endif //PERSONS_EUROPENAME_H
