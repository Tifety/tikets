/************************************************************************************//**
 *  @file       support.cpp
 *
 *  @brief      Brief descriptinon of support.cpp 
 *
 *  @date       2018-05-14 08:44
 *
 ***************************************************************************************/

#include "ticket.h"


using namespace std;

void ticket_manger (vector <string>::iterator start,
                     vector <string>:: iterator finish) {
    cout << "Calling for ticket manager with: ";
    for (auto i = start; i!=finish; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

