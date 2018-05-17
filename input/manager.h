/*************************************************************************************//**
 *  @file       manager.h
 *
 *  @brief      Brief description of manager.h
 *
 *  @date       2018-05-14 09:40
 *         
 **************************************************************************************/


#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
bool type_check (const std::string & type);
bool size_check (const int size);
bool action_check(const std::string& action);
bool id_check (const std::string& id);
bool validation(const std::vector <std::string> & command);
void switcher(std::vector <std::string> command);
class Data {
  public:
  virtual void  Add()= 0 ;
  virtual void  Del(int id)= 0 ;
  virtual void  Update(int id)= 0 ;
  virtual void Search(int id) = 0;
  virtual void List() = 0;
};

void Manager(Data& data, 
            std::vector <std::string> command);
