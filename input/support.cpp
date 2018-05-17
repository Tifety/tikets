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

istream& operator>> (istream& is, Name& name) {
    cout << "First name: ";
    getline(cin, name.first_name);
//        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Second name: ";
    getline(cin, name.second_name);
      //  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return is;
}
void Supports::Add() {
      Name new_sup;
      cin >> new_sup;
      support_list[next_id] = new_sup;
      next_id ++;
    }

void Supports::Del(int id) {  
  if (support_list.count(id) == 0) {
    cout << "No support with id " << id << endl;
    return;
  }
  support_list.erase(id);
  cout << "Some tickets should be delete" << endl;

}

void Supports::List ( ) {
  for (auto a : support_list) {
    cout << a.first << " : "  
    << a.second.first_name << " " << a.second.second_name << endl;
  }
}

void Supports::Update (int id) {
if (support_list.count(id) == 0) {
  cout << "No support with id " << id << endl;
  return;
}
  Name update_sup;
  cin >> update_sup;
  support_list[id] = update_sup;
}

void Supports::Search(int id) {
if (support_list.count(id) == 0) {
  cout << "No support with id " << id << endl;
  return;
}
cout << "There will be tickets for support with id" << id << endl;
}  

