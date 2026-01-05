// src/main.cpp - CORRECT VERSION
#include "../include/tesseract.h"
#include <iostream>

int main() {
    std::cout << "Testing Tesseract DLL...\n";
    
    // Use CORRECT function names
    void* tess = TessBaseAPICreate();  // ✅ Correct!
    if (tess) {
        std::cout << "Successfully created Tesseract!\n";
        
        // Initialize
        if (TessBaseAPIInit(tess, nullptr, "eng") == 0) {
            std::cout << "Initialized successfully!\n";
        } else {
            std::cout << "Initialization failed!\n";
        }
        
        TessBaseAPIDelete(tess);  // ✅ Correct!
        std::cout << "Tesseract deleted.\n";
    } else {
        std::cout << "Failed to create Tesseract\n";
    }
    
    std::cout << "Press Enter to exit...";
    std::cin.get();
    
    return 0;
}