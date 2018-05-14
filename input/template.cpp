/************************************************************************************//**
 *  @file       template.cpp
 *
 *  @brief      Brief descriptinon of template.cpp 
 *
 *  @date       2018-05-14 08:44
 *
 ***************************************************************************************/

#include "template.h"


using namespace std;

void template_manger (vector <string>::iterator start,
                     vector <string>:: iterator finish) {
    cout << "Calling for template manager with: ";
    for (auto i = start; i!=finish; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

