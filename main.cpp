#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

int main()
{
    string greetings[4];
    greetings[0] = "Hello";
    greetings[1] = "hello";
    greetings[2] = "hi";
    greetings[3] = "Hi";

    string whatup[6];
    whatup[0] = "Whats up";
    whatup[1] = "whats up";
    whatup[2] = "What's up";
    whatup[3] = "what's up";
    whatup[5] = "sup";
    whatup[6] = "Sup";

    string year[3];
    year[0] = "Which year is this";
    year[1] = "Can you tell me the current year";
    year[2] = "What year is this";

    std::string input1;
    std::cout << ": ";
    std::cin >> input1;
    time_t currentime = time(0);
    tm* ltm = localtime(&currentime);
    if(input1 == greetings[0] ||
       input1 == greetings[1] ||
       input1 == greetings[2] ||
       input1 == greetings[3])
    {
        std::string phrase = "hello sir what can I do for you";
        std::string command = "espeak -v +f3 \""+phrase+"\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    }
    else if(input1 == whatup[0] ||
            input1 == whatup[1] ||
            input1 == whatup[2] ||
            input1 == whatup[3] ||
            input1 == whatup[4] ||
            input1 == whatup[5]) {
        string p[2];
        p[0] = "not much sir";
        p[1] = "nothing sir";
        int r = rand() % 2;
        if (r == 1) {
            std::string command = "espeak -v +f3 \"" + p[1] + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        } else if (r == 2) {
            std::string command = "espeak -v +f3 \"" + p[0] + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    }
    return 0;
}














