/************************************************************************************//**
 *  @file       input.cpp
 *
 *  @brief      Brief descriptinon of input.cpp
 *
 *  @date       2018-05-13 16:31
 *
 ***************************************************************************************/

#include "input.h"
#include <algorithm>
using namespace std;

void print(string::iterator start, string::iterator finish) {
    for (auto a = start; a!= finish; a++) {
        cout <<*a;
    }
    cout << endl;
}

vector <string>  input_with_prompt() {
        cout << "> ";
        vector <string> tokens;
        string command;
        getline(cin, command);
        cout << command << endl;
//
        auto start = command.begin();
//        auto finish = command.end();
        auto finish = unique(start, command.end(), [](char l, char r) {
                return isspace(l) && isspace(r) && l==r;
                });
        if (isspace(*start)) start++;
        if (isspace(*(finish-1))) finish--;
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
          cout << "input: " << endl;
        for (auto a : tokens) {
            cout << a << endl;
        }
return tokens;
}


