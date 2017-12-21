#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "Friend:\n\n";

    Person p1("Joe", "Bloggs");
    cout << "\t" << p1.ToString() << endl;
    
    Person p2("Jack", "Bloggs");
    cout << "\t" << p2.ToString() << endl;

    cout << endl;

    return 0;
}
