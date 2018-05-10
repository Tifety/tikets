/*
 * =====================================================================================
 *
 *       Filename:  file_read.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10.05.2018 19:45:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main () {
ifstream name_file ("names.txt");
map <int, string> name_list;
int num=0;
if (name_file.is_open()) {
    while ( !name_file.eof()) {
string input;
        num++;
            getline(name_file, input);
            name_list[num]=input;
    }
    name_file.close();
}
 else exit;

for (auto a : name_list) {
    cout << a.first << " : " << a.second << endl;
}

}
