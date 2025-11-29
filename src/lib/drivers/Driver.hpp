#pragma once
#include <iostream>
#include <cstdio>

class Driver
{
public:
    void openFile(const char *, const char *);
    const int writeData(const std::string);
    void closeFile();

private:
    FILE *filePtr;
};
