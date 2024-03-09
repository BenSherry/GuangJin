#ifndef STRINGHELPER_H
#define STRINGHELPER_H


#include <iostream>

class StringHelper {
private:
    std::string content_;
public:
    StringHelper(std::string content):content_(content){}
    void show();

};

#endif