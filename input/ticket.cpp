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
 
std::istream& operator>> (istream& is, Ticket_Info& info) {
  cout << "Description: ";
  getline(is, info.description);
  cout << "Price: ";
  is >> info.price;
  is.ignore();
  cout << "Comment: ";
  getline(is, info.comment);
}

void Tickets::Add () {
  int sup_id, ticket_id;
 Ticket_Info info;
 cout << "Support id: ";
 cin >> sup_id;
  cout << "Ticket number: ";
  cin >> ticket_id; 
  cin.ignore();
cin >> info;
id_list[ticket_id].push_back(sup_id);
tickets_list[make_pair(ticket_id, sup_id)] = info;
}

void Tickets::List() {
  for (auto t : tickets_list) {
    cout << t.first.first << " " << t.first.second << " : " 
    << t.second.price << " - " << t.second.description << "(" 
    << t.second.comment << ")" << endl;
  }
}

void Tickets::Del(int id) {
  
    cout << "del" << endl;
}

void Tickets::Update(int id) {
  cout << "Update";
}

void Tickets::Search(int id) {
  cout << "Search" << endl;
}
