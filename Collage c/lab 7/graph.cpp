#include <graphics.h>
#include <conio.h>

int main(void) {
    // gd is the graphics driver (DETECT auto-detects the best driver)
    // gm is the graphics mode
    int gd = DETECT, gm;
    
    // Initialize the graphics system
    // Note: "C:\\TC\\BGI" is the standard path for Turbo C++. 
    // If you are using Code::Blocks with WinBGIm, an empty string "" is usually sufficient.
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    // Optional: Set the outline color of the circle (e.g., YELLOW)
    setcolor(YELLOW);
    
    // Define the circle's parameters
    int x_center = 250;
    int y_center = 250;
    int radius = 100;
    
    // Draw the circle
    // Syntax: circle(x, y, radius);
    circle(x_center, y_center, radius);
    
    // Wait for the user to press a key so the window doesn't close immediately
    getch();
    
    // Close the graphics window and free up allocated memory
    closegraph();
    
    return 0;
}
