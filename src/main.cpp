#include <iostream>
#include "HttpClient.h"
#include "HtmlParser.h"
#include "CssParser.h"
#include "LayoutEngine.h"
#include "Renderer.h"

int main() {
    HttpClient httpClient;
    HtmlParser htmlParser;
    LayoutEngine layoutEngine;
    Renderer renderer;

    try {
        // Fetch and parse HTML
        std::string html = httpClient.fetch("http://example.com");
        auto domTree = htmlParser.parse(html);

        // Compute layout
        layoutEngine.computeLayout(domTree);

        // Render the page
        renderer.render(domTree);

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
 
