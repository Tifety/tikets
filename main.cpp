#include <iostream> 
#include "tickets.h"
#include <utility>
using namespace std;




int main () {

    cout << "Input format is: " << endl;
    cout << "S N Tn Tp Sp C" << endl;
    cout << "Where " << endl;
    cout << "S - Surname of support" << endl <<
            "N - name of support" << endl <<
            "Tn - ticket number" << endl <<
            "Tp - ticket price" << endl << 
            "C - comment with work in ticket" << endl <<
            "Print EXIT for quit" << endl;
    map <Name, Worker> Tickets_for_pay;
    Name n;
    int number;
    int p; 
    double s;
    string c;
    while (true) {
    cin >> n;
    if (n.sname == "EXIT") break;
    cin >> number >> p >> s >> c;
    Paid Ticket(p, s, c);
    cout << number << ": "<< Ticket.price << " " << Ticket.support_get << " " << Ticket.descript << endl;
    Tickets_for_pay.insert(pair <Name, Worker> (n, Worker(n)));
    Tickets_for_pay.at(n).AddTicket(number, Ticket);
    for (auto p : Tickets_for_pay) {
    cout << p.first.sname << " " << p.first.fname << endl;
    p.second.PrintSelf();
    }
    }
/*    Worker one(n);
    one.GetName();
    one.AddTicket(1, {10, 10*0.4, "test"});
    one.AddTicket(2, {10, 4, "test"});
    one.AddTicket(3, {10, 4, "test"});
    one.AddTicket(4, {10, 4, "test"});
    one.AddTicket(5, {10, 4, "test"});
    one.AddTicket(4, {20, 8, "test"});
    one.PrintSelf();
    one.ChangeTicket(4, {20, 8, "testi2"});
    one.ChangeTicket(9, {20, 8, "testi2"});
    one.PrintSelf();*/
}

