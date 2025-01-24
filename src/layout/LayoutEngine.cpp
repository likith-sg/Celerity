#include "LayoutEngine.h"
#include <iostream>

void LayoutEngine::computeLayout(std::shared_ptr<DomNode> root) {
    if (!root) return;
    std::cout << "Computing layout for: " << root->tagName << std::endl;
    for (auto& child : root->children) {
        computeLayout(child);
    }
}
 
