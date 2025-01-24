 #include "HtmlParser.h"
#include <iostream>
#include <sstream>

std::shared_ptr<DomNode> HtmlParser::parse(const std::string& html) {
    // Simple tokenizer (placeholder for now)
    auto root = std::make_shared<DomNode>();
    root->tagName = "html"; // Root tag

    auto body = std::make_shared<DomNode>();
    body->tagName = "body";
    root->children.push_back(body);

    // Example: Add child elements
    auto p = std::make_shared<DomNode>();
    p->tagName = "p";
    body->children.push_back(p);

    return root;
}

