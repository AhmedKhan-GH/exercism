#include <string>
#include <iostream>

namespace log_line {
    std::string message(std::string line) {
        return line.substr(line.find(":") + 2);
    }
    
    std::string log_level(std::string line) {
        return line.substr(1, line.find(":") - 2);
    }
    
    std::string reformat(std::string line) {
        std::string msg = log_line::message(line);
        std::string err = log_line::log_level(line);

        return msg + " (" + err + ")";
    }  
}