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
    cout << "Second name: ";
    cin >> input.second_name;
    cout << input.first_name << " " << input.second_name;
    cin.ignore(); 
    return;
}



class Supports {

    void Add(Name new_sup) {
    support_list[next_id] = new_sup;
    next_id ++;
    }

    private:
        int next_id=1;
        map <int, Name> support_list; 
};

