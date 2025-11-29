#pragma once
#include <iostream>

class Driver {
public:
    void openFile(const char*);
    const int writeData(const char*);
    void closeFile();
};

