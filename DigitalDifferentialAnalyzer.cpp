#include <iostream>
#include <cmath>
using namespace std;

void drawLineDDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    /* Calculate steps (the number of pixels to move either in x or y direction) */

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // Calculate increments for x and y
    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;

    // Starting position
    float x = x1;
    float y = y1;

    // Draw the points
    cout << "Digitalized points on the line using DDA:" << endl;
    for (int i = 0; i <= steps; i++) {
        cout << "(" << round(x) << ", " << round(y) << ")" << endl;
        x += xIncrement;
        y += yIncrement;
    }
}

int main() {

    // Given endpoints of the line

    int x1 = 0, y1 = 2;
    int x2 = 4, y2 = 5;

    /* Call the function to draw the line using DDA */ 

    drawLineDDA(x1, y1, x2, y2);

    return 0;
}
