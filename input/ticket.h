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
#include <utility>
#include "manager.h"
struct Ticket_Info {
  int price;
  double support_part;
  std::string description;
  std::string comment;
};

 std::istream& operator>> (std::istream& is,  Ticket_Info& info);

class Tickets:public Data {
  public: 
  void Add() override;
  void Del(int id) override;
  void Search(int id) override;
  void List() override;
  void Update(int id) override;
  private:
  std::map <int, std::vector<int>> id_list;
  std::map <std::pair<int, int>, Ticket_Info> tickets_list;

};
