#pragma once
#include <iostream>
#include <cstdio>

class Driver
{
public:
    void openFile(const char *, const char *);
    int writeData(const std::string);
    void closeFile();

private:
    FILE *filePtr;
};
