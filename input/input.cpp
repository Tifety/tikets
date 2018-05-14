/************************************************************************************//**
 *  @file       input.cpp
 *
 *  @brief      Brief descriptinon of input.cpp
 *
 *  @date       2018-05-13 16:31
 *
 ***************************************************************************************/

#include "input.h"

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include "manager.h"

using namespace std;

vector <string>  parse_command() {
    vector <string> tokens;
    string command;
    getline(cin, command);
    auto start = command.begin();
    auto finish = command.end();
    auto point = start;
    while (point!=finish) {
        string token;
        point = find(start, finish, ' ');
        for (auto i = start; i!=point; i++) {
            token+=*i;
        }
        tokens.push_back(token);
        start=point+1;
    }
    return tokens;
}

int main() {
    while (true) {
        cout << "> ";
        vector <string> command_parts = parse_command();
        switcher(command_parts);
    }
}


