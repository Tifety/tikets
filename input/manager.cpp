/************************************************************************************//**
 *  @file       manager.cpp
 *
 *  @brief      Brief descriptinon of manager.cpp 
 *
 *  @date       2018-05-14 09:38
 *
 ***************************************************************************************/

#include "manager.h"


using namespace std;

bool type_check (const string & type) {
    set <string> types = {"support", "ticket", "template"};
return (find(types.begin(), types.end(), type)==types.end());
}

bool validation(const vector <string> & command){
  return  type_check(command[0]);
}

    void manager (const string&  type, vector<string>::iterator start, 
       vector <string>::iterator finish) {
    cout << "Calling for " << type <<" manager with: ";
    for (auto i = start; i!=finish; i++) {
        cout << *i << " ";
    }
    cout << endl;
       
}
void switcher(vector <string> command) {
    const int max_s = 3;
    const int min_s = 2;
    if (command[0] == "exit" ) exit(0);
    if (command.size() < min_s || command.size() > max_s || validation(command)) {
        cout << "Wrong syntax" << endl;
    }
    else { string type = command[0];
    manager(type, command.begin()+1, command.end());
    }
}


