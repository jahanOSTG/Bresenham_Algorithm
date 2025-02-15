#include <graphics.h>
#include <iostream>

using namespace std;

void drawline(int x0, int y0, int x1, int y1)  
{  
    int dx, dy, p, x, y;  
    dx = abs(x1 - x0);  
    dy = abs(y1 - y0);  
    x = x0;  
    y = y0;  
    p = 2 * dy - dx;  
    
    while(x <= x1)  // Ensures it works for all cases
    {  
        putpixel(x, y, BLACK);  // Use BLACK instead of WHITE
        if(p >= 0)  
        {  
            y = y + 1;  
            p = p + 2 * dy - 2 * dx;  
        }  
        else  
        {  
            p = p + 2 * dy;  
        }  
        x = x + 1;  
    }  
}  

int main()  
{  
    int gd = DETECT, gm;  
    initgraph(&gd, &gm, NULL); 
    
    setbkcolor(WHITE); // Set background color
    cleardevice();  // Clear screen with white background
    
    int x0 = 200, y0 = 200, x1 = 300, y1 = 400; // Define only once
    
    drawline(x0, y0, x1, y1);  
    
    delay(5000); // Delay to view the result
    closegraph(); // Close graphics mode
    
    return 0;  
}

