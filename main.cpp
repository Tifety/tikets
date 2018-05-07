#include <iostream> 
#include "tickets.h"
using namespace std;




int main () {

    cout << "Input format is: " << endl;
    cout << "S N Tn Tp Sp C" << endl;
    cout << "Where " << endl;
    cout << "S - Surname of support" << endl <<
            "N - name of support" << endl <<
            "Tn - ticket number" << endl <<
            "Tp - ticket price" << endl << 
            "C - comment with work in ticket" << endl;
    map <Name, Worker> Tickets_for_pay;
    Name n;
    int number;
    int p; 
    double s;
    string c;
    cin >> n;
    cin >> number >> p >> s >> c;
    Paid Ticket(p, s, c);
    cout << n.sname << " " << n.fname << endl;
    cout << number << ": "<< Ticket.price << " " << Ticket.support_get << " " << Ticket.descript << endl; 
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

