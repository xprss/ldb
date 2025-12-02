#include "Driver.hpp"

void Driver::openFile(const char *filename, char const *mode)
{
    // Implementation for opening a file
    std::cout << "Opening file: " << filename << std::endl;
    if ((this->filePtr = fopen(filename, mode)) == NULL) {
        std::cerr << "Error opening file: " << filename << std::endl;
        throw std::runtime_error("File open failed");
    }
    std::cout << "File opened successfully." << std::endl;
}

int Driver::writeData(const std::string data)
{
    // Implementation for opening a file
    if (this->filePtr == NULL) {
        std::runtime_error("File not opened");
    }
    std::cout << "Writing data: " << data << std::endl;
    if (fputs(data.c_str(), this->filePtr) != EOF) {
        std::cout << "Data written successfully." << std::endl;
        return 0;
    } else {
        std::cerr << "Error writing data to file." << std::endl;
    }
    return -1;
}

void Driver::closeFile()
{
    // Implementation for opening a file
    std::cout << "Closing file." << std::endl;
    if (this->filePtr == NULL) {
        throw std::runtime_error("File open failed");
    }
    fclose(this->filePtr);
    this->filePtr = NULL;
    std::cout << "File closed successfully." << std::endl;
}

