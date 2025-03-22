#include <iostream> 
#include <vector>
#include "triangle.h"

// Classes //
int main() {
    Triangle tri1(1.0, 5.0), tri2(3.0, 2.0);

    std::cout << tri1.area() << std::endl;
    std::cout << tri2.area() << std::endl;

    tri1.base = 3.0;
    std::cout << tri1.base << std::endl;

}

// Functions //
// #include <iostream> 
// #include <vector> 

// double triangle_area(double base, double height) {
//     double area; 
//     area = (1.0 / 2.0) * base * height;

//     return area;
// }

// void triangle_area2(double base, double height, double &area) {
//     area = (1.0 / 2.0) * base * height;
// }

// void square_info(double length, double &area, double &perimeter) {
//     area = length * length; 
//     perimeter = 4 * length;
// }

// void print_vec(std::vector<double> out) {
//     for (int i = 0; i < out.size(); ++i) {
//         std::cout << out[i] << std::endl;
//     }
// }

// int main() {
//     std::vector<double> test(3, 1.2);

//     print_vec(test);

//     return 0;
// }