/*
 * =====================================================================================
 *
 *       Filename:  input.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.05.2018 16:21:04
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
#include "tickets.h"

struct Input {
    Name name;
    int number;
    int price;
    double sup_part;
    std::string comment;
};
