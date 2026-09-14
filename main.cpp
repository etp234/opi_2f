#include <iostream>

double sixsevenFunction(double x) {
    return x + 5.0;
}

double moggFunction(double x) {
    return x * 3.0;
}

double kvasFunction(double x) {
    return x - 2.0;
}

double postolskiyFunction(double x) {
    return x / 2.0;
}

int main() {
    double initialValue = 10.0;

    std::cout << sixsevenFunction(initialValue) << std::endl;
    std::cout << moggFunction(initialValue) << std::endl;
    std::cout << kvasFunction(initialValue) << std::endl;
    std::cout << postolskiyFunction(initialValue) << std::endl;

    return 0;
}