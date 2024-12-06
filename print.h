
#ifndef PRINT_H
#define PRINT_H
#include <string>
#include <vector>

#include "doctor.h"
#include "user.hpp"
#include "account.h"

using namespace std;

class Print
{ 

    public:

    Print()
    {

    }
    string telehealthAvailability; 

    void printDocInformation(const Doctor &doctor);
    void printDocLoginInformation(const Doctor &docLogin); 
    void printUserLoginInformation(const User &userLogin);
    static int main();

}; 


#endif