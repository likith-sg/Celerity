#include "CssParser.h"
#include <sstream>

std::map<std::string, std::string> CssParser::parse(const std::string& css) {
    std::map<std::string, std::string> styles;
    // Simplistic parser
    std::istringstream stream(css);
    std::string line;
    while (std::getline(stream, line)) {
        auto colonPos = line.find(":");
        if (colonPos != std::string::npos) {
            std::string key = line.substr(0, colonPos);
            std::string value = line.substr(colonPos + 1);
            styles[key] = value;
        }
    }
    return styles;
}

