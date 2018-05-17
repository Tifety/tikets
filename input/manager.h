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
#include "support.h"
bool type_check (const std::string & type);
bool size_check (const int size);
bool action_check(const std::string& action);
bool id_check (const std::string& id);
bool validation(const std::vector <std::string> & command);
void switcher(std::vector <std::string> command);

void Manager(Data& data, 
            std::vector <std::string> command);
