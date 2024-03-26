#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
    double area = 0.0;

    switch (ch) {
        case 1:
            if (a.size() < 1)
                return -1;
            area = M_PI * pow(a[0], 2); // Calculate area of circle
            break;

        case 2:
            if (a.size() < 2)
                return -1;
            area = a[0] * a[1]; // Calculate area of rectangle
            break;

        default:
            return -1; // Invalid choice
    }

    return area;
}

