#include <iostream>
using namespace std;

void drawLineBresenham(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int x = x1, y = y1;
    int xIncrement = (x2 > x1) ? 1 : -1;
    int yIncrement = (y2 > y1) ? 1 : -1;

    if (dx >= dy) {
        int d = 2 * dy - dx;
        int incrE = 2 * dy;
        int incrNE = 2 * (dy - dx);

        cout << "Digitalized points on the line using Bresenham:" << endl;
        cout << "(" << x << ", " << y << ")" << endl;
        while (x != x2) {
            if (d <= 0) {
                d += incrE;
            } else {
                d += incrNE;
                y += yIncrement;
            }
            x += xIncrement;
            cout << "(" << x << ", " << y << ")" << endl;
        }
    } else {
        int d = 2 * dx - dy;
        int incrN = 2 * dx;
        int incrNE = 2 * (dx - dy);

        cout << "Digitalized points on the line using Bresenham:" << endl;
        cout << "(" << x << ", " << y << ")" << endl;
        while (y != y2) {
            if (d <= 0) {
                d += incrN;
            } else {
                d += incrNE;
                x += xIncrement;
            }
            y += yIncrement;
            cout << "(" << x << ", " << y << ")" << endl;
        }
    }
}

int main() {
    int x1 = 0, y1 = 2;
    int x2 = 4, y2 = 5;

    drawLineBresenham(x1, y1, x2, y2);

    return 0;
}
