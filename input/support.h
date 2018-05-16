/*************************************************************************************//**
 *  @file       support.h
 *
 *  @brief      Brief description of support.h
 *
 *  @date       2018-05-14 08:45
 *         
 **************************************************************************************/


#pragma once
#include <vector>
#include <map>
#include <iostream>

struct Name {
    std::string first_name;
    std::string second_name;
};

void support_manager (std::vector <std::string>::iterator start,
                     std::vector <std::string>:: iterator finish);

void add_input ();

class Supports {
  public:
  void Add(Name new_sup);

    private:
        int next_id=1;
        std::map <int, Name> support_list; 
};
