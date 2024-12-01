#include <iostream>
#include <cmath>
#include <iomanip> // For setting precision

#define pi 3.14159265358979323846L // Use a more precise value of pi as long double

using namespace std;

int main() {
    long double x1, y1, r1;
    long double x2, y2, r2;
    
    // Input the circle data
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    
    // Calculate the distance between the centers of the circles
    long double centre_dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    // If circles do not overlap
    if (centre_dist >= r1 + r2) {
        cout << fixed << setprecision(20) << 0.0L << endl;
        return 0;
    }
    
    // If one circle is completely inside the other
    if (centre_dist <= fabsl(r1 - r2)) {
        long double smaller_radius = min(r1, r2);
        cout << fixed << setprecision(20) << pi * smaller_radius * smaller_radius << endl;
        return 0;
    }
    
    // If circles partially overlap
    long double d = centre_dist;
    
    // Sector angle alpha for circle 1
    long double alpha = acosl((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d)) * 2;
    
    // Sector angle beta for circle 2
    long double beta = acosl((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d)) * 2;
    
    // Sector areas
    long double area_sector1 = (alpha / 2) * r1 * r1;
    long double area_sector2 = (beta / 2) * r2 * r2;
    
    // Triangle areas
    long double triangle1 = (r1 * r1 * sinl(alpha)) / 2;
    long double triangle2 = (r2 * r2 * sinl(beta)) / 2;
    
    // Overlapping area
    long double result_area = area_sector1 + area_sector2 - triangle1 - triangle2;
    
    // Print the result with precision
    cout << fixed << setprecision(20) << result_area << endl;
    return 0;
}
