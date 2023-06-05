#ifndef PERSONS_ABSTRACTNAME_H
#define PERSONS_ABSTRACTNAME_H

#include <string>

using namespace std;

class AbstractName {
protected:
    string _name;

    AbstractName(string name) {
        _name = name;
    }

public:
    virtual string GetFullName() = 0;
};


#endif //PERSONS_ABSTRACTNAME_H
