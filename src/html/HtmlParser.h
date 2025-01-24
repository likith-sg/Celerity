 #ifndef HTML_PARSER_H
#define HTML_PARSER_H

#include <string>
#include <memory>
#include <vector>

struct DomNode {
    std::string tagName;
    std::vector<std::shared_ptr<DomNode>> children;
};

class HtmlParser {
public:
    std::shared_ptr<DomNode> parse(const std::string& html);
};

#endif // HTML_PARSER_H

