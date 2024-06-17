#ifndef ERROR_H
#define ERROR_H

#include <string>

class Error {
public:
    Error(const std::string& message);
    virtual ~Error() {}
    const std::string message;
};

class IOError : public Error {
public:
    IOError(const std::string& message);
};

class EOFError : public Error {
public:
    EOFError();
    EOFError(const std::string& message);
};

#endif
