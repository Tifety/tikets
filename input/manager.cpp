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
    if (!size || !type || !action || !id)
        cout << size << " " <<  type << " " << action << " " << id;
    return size && type && action && id;
}

void Manager(Data& data, vector <string> command) {
  string action = command[0];
  if (action == "add") {
  if (command.size() > 1) {
    cout << "Wrong syntax" << endl;
    return;
  }
  data.Add();
}
  else if (action == "del" ) {
  if (command.size() <= 1) {
    cout << "Wrong syntax" << endl;
    return;
  }
    data.Del(stoi(command[1]));
  }
if (action == "update") {
  if (command.size() <=1) {
    cout << "Wrong syntax" << endl;
  return;
  }
  data.Update(stoi(command[1]));
}

if (action == "search") {
  if (command.size() <=1) {
    cout << "Wrong syntax" << endl;
  return;
  }
  data.Search(stoi(command[1]));
}

data.List();
}
