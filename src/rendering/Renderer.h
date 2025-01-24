#ifndef RENDERER_H
#define RENDERER_H

#include "DomTree.h"

class Renderer {
public:
    void render(std::shared_ptr<DomNode> root);
};

#endif // RENDERER_H
 
