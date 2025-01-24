# Celerity Web Engine

Celerity is a modern, high-performance web engine written in C++. It is designed to handle web rendering with an emphasis on speed, efficiency, and flexibility. Inspired by the Servo engine, Celerity focuses on rendering web content while maintaining a clean architecture for modularity and scalability.

## Features

- **Fast Rendering**: Optimized for quick layout, DOM rendering, and JavaScript execution.
- **Web Standards Compliance**: Supports modern web standards, including HTML5, CSS3, and JavaScript.
- **Modular Architecture**: Designed to allow easy integration of various components like layout engines, rendering backends, and JavaScript engines.
- **Cross-Platform**: Built to run on Windows, Linux, and macOS.
- **Open-Source**: Free to use and extend, with contributions welcome.

## Project Structure

The Celerity web engine consists of the following major modules:

- **Networking**: Handles HTTP requests and responses.  
- **HTML Parsing**: Parses HTML documents and builds a DOM tree.  
- **CSS Parsing**: Parses CSS stylesheets and applies styles to the DOM.  
- **Layout Engine**: Computes the layout and positioning of HTML elements on the page.  
- **Rendering**: Renders the page using a chosen rendering backend (e.g., Skia).  
- **JavaScript Engine**: Integrates a JavaScript engine for dynamic content execution.  
- **DOM Tree**: Represents the structure of the web page in memory.

## Getting Started

### Prerequisites

- **C++ Compiler**: A modern C++ compiler (e.g., GCC, Clang, MSVC).
- **CMake**: For building the project.
- **Dependencies**: External libraries like Skia (for rendering) and V8 (for JavaScript execution).

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/yourusername/celerity-web-engine.git
   cd celerity-web-engine
   ```

2. Install dependencies (e.g., Skia, V8).
3. Build the project using CMake:
 ```bash
 mkdir build
 cd build
 cmake ..
 make
```
4.Run the engine:
```bash
./celerity
```

## Directory Structure
```bash
Celerity/
├── src/
│   ├── main.cpp            #Entry point for the engine
│   ├── networking/
│   │   ├── HttpClient.h    #HTTP interface
│   │   ├── HttpClient.cpp
│   ├── html/
│   │   ├── HtmlParser.h    #HTML parser
│   │   ├── HtmlParser.cpp
│   ├── css/
│   │   ├── CssParser.h     #CSS parser
│   │   ├── CssParser.cpp
│   ├── layout/
│   │   ├── LayoutEngine.h  #Layout engine
│   │   ├── LayoutEngine.cpp
│   ├── rendering/
│   │   ├── Renderer.h      #Rendering engine
│   │   ├── Renderer.cpp
│   ├── js/
│   │   ├── JsEngine.h      #JavaScript engine
│   │   ├── JsEngine.cpp
│   ├── dom/
│   │   ├── DomTree.h       #DOM tree representation
│   │   ├── DomTree.cpp
├── third_party/
│   ├── v8/                 #JavaScript engine
│   ├── skia/               #Rendering library
├── CMakeLists.txt          #CMake build configuration
├── README.md               #Project overview
```
## Contributing

We welcome contributions! If you’d like to contribute to the development of Celerity, please fork the repository, make your changes, and submit a pull request. Ensure that you follow the coding style and include unit tests where appropriate.

## License

Celerity is open-source software, licensed under the MIT License.

## Acknowledgments

Inspired by the Servo Project.
Built on top of modern C++ libraries and tools.
