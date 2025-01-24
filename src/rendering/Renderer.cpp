#include "Renderer.h"
#include <iostream>

void Renderer::render(std::shared_ptr<DomNode> root) {
    if (!root) return;
    std::cout << "Rendering: " << root->tagName << std::endl;
    for (auto& child : root->children) {
        render(child);
    }
}

