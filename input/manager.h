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
    void manager (const std::string&  type, std::vector<std::string>::iterator start,
       std::vector <std::string>::iterator finish);
void switcher(std::vector <std::string> command);

