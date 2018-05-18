/*************************************************************************************//**
 *  @file       main.cpp
 *
 *  @brief      Main entry to C-based application
 *
 *  @date       2018-05-15 21:12
 *
 **************************************************************************************/

#include <iostream>

using namespace std;

/******** Function ************************************************//**
 *   @brief     main entry Function
 *
 *   @param     argc - number of parameters pass to the application from
 *                 command line input (stdin)
 *   @param     argv - array of parameters pass to the application from
 *                 command line input (stdin)
 *
 *   @return    exit code of the application
 *********************************************************************/
#include <iostream>
#include "support.h"
#include "input.h"
#include "manager.h"
#include "ticket.h"

int main()
{
    Supports supports;
    Tickets tickets;
    while (true) {
        vector <string> command = input_with_prompt();
        string type = command[0]; 
        if (type == "exit") exit (0);
        if (!validation(command)) {
          cout << "Wrong syntax" << endl;
          continue;
        }
    if (type == "support") {
    Manager(supports, 
        {command.begin()+1, command.end()});
    }
    if (type == "ticket") {
    Manager(tickets, {command.begin()+1, command.end()});
    }
}
    return 0;
}

