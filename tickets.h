/*
 * =====================================================================================
 *
 *       Filename:  tickets.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04.05.2018 19:48:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#pragma once
#include <iostream>
#include <map>
#include <vector>

struct Name {
    std::string fname;
    std::string sname;
    };

struct Paid {
    int price;
    double procent;
    std::string descript;
};

class Worker {
    public:
        Worker(string second_name, string first_name);
        Worker(Name n);

        void const GetName();
        void AddTicket(int num, Paid tik);
        void const PrintSelf();
        void ChangeTicket()int num, Paid change;
    private:
        Name Preson;
        map <int, Paid> tickets;
};
