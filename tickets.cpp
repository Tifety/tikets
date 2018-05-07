/*
 * =====================================================================================
 *
 *
 * =====================================================================================
 */
#include <iostream>
#include <map>
#include <vector>
#include "tickets.h"
using namespace std;

bool is_number( const string& test) {
    return find_if(test.begin(), test.end(), [] (char c) {return !isdigit(c);}) == test.end();
}

istream& operator>> (istream& is, Name& n) {
    is >> n.sname;
    is >> n.fname;
}

 Paid::Paid() {
  Paid::price = 0;
  Paid::support_get =0;
  Paid::descript="";
}

Paid::Paid (int p, double s, string c) {
  Paid::price = p;
  Paid::support_get = s;
  Paid::descript = c;
}

Paid::Paid(int p, string c) {
  Paid::price = p;
  Paid::support_get = p * 0.4;
  descript = c;
}



Worker::Worker (string second_name, string first_name) {
  Worker::Person.fname = first_name;
  Worker::Person.sname = second_name;
    }

Worker::Worker (Name n) {
  Worker::Person = n;
    }

    void const Worker::GetName() {
        cout << Worker::Person.sname << " " << Worker::Person.fname << endl;
        }

    void Worker::AddTicket (int num, Paid tik) {
        if (Worker::tickets.count(num) == 1) {
           char c;
            do {
           cout << "Task number" << num << " is already exist. Overwrite? (y/n) ";
           cin >> c;
            } while ( (c != 'y') && (c != 'n'));
            if (c == 'n') return;
        }
        Worker::tickets[num] = tik;
    }

    void const Worker::PrintSelf () {
        cout << Worker::Person.sname << " " << Worker::Person.fname << "'s tickets:" << endl;
    for (auto tick : Worker::tickets) {
        cout << tick.first << ": " << tick.second.price << "  "
             << tick.second.support_get << " " << tick.second.descript << endl;
               }
    }

    void Worker::ChangeTicket (int num, Paid change) {
        if (Worker::tickets.count(num)==1) {
          Worker::tickets[num] = change;
        }
        else {
            cout << "There is no such ticket number. You need to add it first" << endl;
        }
    }

/* 
int main () {

    cout << "Nice!" << endl;
    map <Name, Worker> Tickets_for_pay;
    Name n = { "One", "Two"};
    Worker one(n);
    one.GetName();
    one.AddTicket(1, {10, 4, "test"});
    one.AddTicket(2, {10, 4, "test"});
    one.AddTicket(3, {10, 4, "test"});
    one.AddTicket(4, {10, 4, "test"});
    one.AddTicket(5, {10, 4, "test"});
    one.AddTicket(4, {20, 8, "test"});
    one.PrintSelf();
    one.ChangeTicket(4, {20, 8, "testi2"});
    one.ChangeTicket(9, {20, 8, "testi2"});
    one.PrintSelf();
}
 */
