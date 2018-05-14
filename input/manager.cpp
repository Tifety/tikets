/************************************************************************************//**
 *  @file       manager.cpp
 *
 *  @brief      Brief descriptinon of manager.cpp 
 *
 *  @date       2018-05-14 09:38
 *
 ***************************************************************************************/

#include "manager.h"
#include "support.h"

using namespace std;

bool type_check (const string & type) {
    set <string> types = {"support", "ticket", "template"};
return (find(types.begin(), types.end(), type)!=types.end());
}

bool size_check (const int size) {
    const int min_command_size = 2;
    const int max_command_size =3;
    if (size < min_command_size || size > max_command_size) return false;
    return true;
}

bool action_check(const string& action) {
    set <string> actions {"add", "del", "update", "list", "search"};
    return (find(actions.begin(), actions.end(), action)!=actions.end());
}

bool id_check (const string& id) {
     for (auto i = id.begin(); i!= id.end(); i++) {
         if (!isdigit(*i)) return false;
     }
     return true;
}

bool validation(const vector <string> & command){
    bool size = size_check(command.size());
    bool type =  type_check(command[0]);
    bool action = action_check (command[1]);
    bool id = true;
    if (command.size() == 3) {
        id = id_check (command[2]);
    }
    return size && type && action && id;
}

    void manager (const string&  type, vector<string>::iterator start, 
       vector <string>::iterator finish) {
    if (type == "support") {
        support_manager(start, finish);
    }
       
}
void switcher(vector <string> command) {
    for (auto a : command) {
        cout << "to switcher" << endl;
        cout << a << " ";
    }
    cout << endl;
    const int max_s = 3;
    const int min_s = 2;
    cout << "mark a" << endl;
    if (command[0] == "exit" ) exit(0);
    cout << "mark b" << endl;
    if (!validation(command)) {
        cout << "Wrong syntax" << endl;
    }
    else { string type = command[0];
    cout << "mark c" << endl;
    manager(type, command.begin()+1, command.end());
    cout << "mark d" << endl;
    }
}


