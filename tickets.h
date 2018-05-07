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
#include <string>
struct Name {
    std::string fname;
    std::string sname;
    };

class Paid {
    public:
    Paid(int p, double s, std::string c);
    Paid(int p, std::string c);
    Paid ();
    int price;
    double support_get;
    std::string descript;
    private:
};

class Worker {
    public:
        Worker(std::string second_name, std::string first_name);
        Worker(Name n);

        void const GetName();
        void AddTicket(int num, Paid tik);
        void const PrintSelf();
        void ChangeTicket(int num, Paid change);
    private:
        Name Person;
        std::map <int, Paid> tickets;
};
