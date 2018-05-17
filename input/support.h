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
#include "manager.h"
struct Name {
    std::string first_name;
    std::string second_name;
};

std::istream& operator>> (std::istream& is, Name& name);

Name  add_input ();


class Supports:public Data {
  public:
  void Add() override;
  void Del(int id) override; 
  void List() override;
  void  Update(int id) override;
  void Search(int id) override;
    private:
        int next_id=1;
        std::map <int, Name> support_list; 
};
