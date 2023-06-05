#ifndef PERSONS_RUSSIANADDRESS_H
#define PERSONS_RUSSIANADDRESS_H

#include "../AbstractAddress.h"

class RussianAddress : public AbstractAddress {
private:
    int _index;
    string _region;
    string _district;
    string _locality;

public:
    RussianAddress(int index, string region, string district, string locality) {
        _index = index;
        _region = region;
        _district = district;
        _locality = locality;
    }

    string ToString() override {
        return to_string(_index) + ", " + _region + ", " + _district + ", " + _locality;
    }

};


#endif //PERSONS_RUSSIANADDRESS_H
