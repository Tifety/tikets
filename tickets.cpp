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


Worker:Worker (string second_name, string first_name) {
        Person.fname = first_name;
        Person.sname = second_name;
    }

Worker:Worker (Name n) {
        Person = n;
    }

    void const GetName() {
        cout << Person.sname << " " << Person.fname << endl;
        }

    void AddTicket (int num, Paid tik) {
        if (tickets.count(num) == 1) {
           char c;
            do {
           cout << "Task number" << num << " is already exist. Overwrite? (y/n) ";
           cin >> c;
            } while ( (c != 'y') && (c != 'n'));
            if (c == 'n') return;
        }
        tickets[num]=tik;
    }

    void const PrintSelf () {
        cout << Person.sname << " " << Person.fname << "'s tickets:" << endl;
    for (auto tick : tickets) {
        cout << tick.first << ": " << tick.second.price << "  "
             << tick.second.procent << " " << tick.second.descript << endl;
               }
    }

    void ChangeTicket (int num, Paid change) {
        if (tickets.count(num)==1) {
        tickets[num] = change;
        }
        else {
            cout << "There is no such ticket number. You need to add it first" << endl;
        }
    }

    private:
    Name Person;
    map <int, Paid> tickets;

};

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
