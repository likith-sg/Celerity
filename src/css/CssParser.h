 #ifndef CSS_PARSER_H
#define CSS_PARSER_H

#include <string>
#include <map>

class CssParser {
public:
    std::map<std::string, std::string> parse(const std::string& css);
};

#endif // CSS_PARSER_H

