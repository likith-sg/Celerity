#ifndef LAYOUT_ENGINE_H
#define LAYOUT_ENGINE_H

#include "DomTree.h"

class LayoutEngine {
public:
    void computeLayout(std::shared_ptr<DomNode> root);
};

#endif // LAYOUT_ENGINE_H

