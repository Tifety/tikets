/************************************************************************************//**
 *  @file       support.cpp
 *
 *  @brief      Brief descriptinon of support.cpp 
 *
 *  @date       2018-05-14 08:44
 *
 ***************************************************************************************/

#include "support.h"

#include <limits>

using namespace std;

void add_input();

void support_manager (vector <string>::iterator start,
                     vector <string>:: iterator finish) {
    cout << "Calling for support manager with: ";
    for (auto i = start; i!=finish; i++) {
        cout << *i << " ";
    }
    cout << endl;
    if (*start == "add") {
        add_input();
    }
return;
}


void add_input () {
Name input;
    cout << "Name: ";
    cin >> input.first_name;
//        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Second name: ";
    cin >> input.second_name;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
}



    void Supports::Add(Name new_sup) {
      support_list[next_id] = new_sup;
      next_id ++;
    }

