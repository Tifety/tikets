/************************************************************************************//**
 *  @file       support.cpp
 *
 *  @brief      Brief descriptinon of support.cpp 
 *
 *  @date       2018-05-14 08:44
 *
 ***************************************************************************************/

#include "support.h"


using namespace std;

void support_manger (vector <string>::iterator start,
                     vector <string>:: iterator finish) {
    cout << "Calling for support manager with: ";
    for (auto i = start; i!=finish; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

