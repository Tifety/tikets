/************************************************************************************//**
 *  @file       input.cpp
 *
 *  @brief      Brief descriptinon of input.cpp
 *
 *  @date       2018-05-13 16:31
 *
 ***************************************************************************************/

#include "input.h"
using namespace std;

vector <string>  input_with_prompt() {
        cout << "> ";
        vector <string> tokens;
        string command;
        getline(cin, command);
        cout << "in parser: " << command << endl;
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
/*         cout << "input: " << endl;
        for (auto a : tokens) {
            cout << a << " ";
        }
        cout << "switcher start: " << endl; */ 
return tokens;
}


