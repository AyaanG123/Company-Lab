#include "Communications.h"

std::string greeting(std::string name) {
    return "Hi, " + name + " it's great to see you here at ComQuest!\n";
}

void addy(std::string &street) {
    for (char &c : street) {
        c = toupper(c);
    }
}

std::string closing(std::string product) {
    return "We hope you enjoyed the " + product + " here at ComQuest!";
}
