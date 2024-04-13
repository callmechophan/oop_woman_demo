/**
 * class
 * - property: variable
 * - method: function
 * 
 * #1 encapsulation: all property cannot access outside
 * - public: both inside and outside class can access
 * - private: only inside class can access
 * 
 * method special
 * - constructor
 * - copy constructor
 * - destructor: automatically called
 *     + stack: when the function "return"
 *     + heap: when "delete" is used
 *
 * #2 abstraction: property modify through method
 * #3 inheritance: parent class (base class) & children class (derived class)
 * - multi-level inheritance
 * - multi inheritance
 * 
 * #4 polymorphism
 * - overriding: derived class re-defined method defined in base class (virtual)
 * - overloadding: method same name - different parameter
*/

#include <iostream>
#include "GaiNgoan.h"

int main()
{
    // #3 PhuNu -> GaiNgoan
    PhuNu *maria_ozawa = new GaiNgoan("Maria Ozawa", 22, false);
    
    std::cout << maria_ozawa->choi_nhac_cu("ken") << std::endl;

    delete maria_ozawa;

    return 0;
};