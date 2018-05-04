#include <iostream> 
#include "tickets.h"
using namespace std;
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

