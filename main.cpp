#include <iostream>

#include "./lib/names/RussianName.h"
#include "./lib/names/EuropeName.h"

#include "./lib/addresses/RussianAddress.h"

#include "./lib/Phone.h"

#include "./lib/Person.h"

using namespace std;

int main() {
    Person* person;

    cout << "1. Russian name" << endl;
    cout << "2. Europe name" << endl;
    int input;

    cin >> input;

    AbstractName* name;
    switch (input) {
        case 1:
            name = new RussianName("family", "name", "patronymic");
            break;
        case 2:
            name = new EuropeName("first name", "second name", "last name");
            break;
    }
    person = new Person(name, new RussianAddress(123456, "region", "district", "locality"), new Phone(7, 904, 2144491));
    cout << person->GetName()->GetFullName() << endl;
    cout << person->GetAddress()->ToString() << endl;
    cout << person->GetPhone()->ToString() << endl;

    return 0;
}
