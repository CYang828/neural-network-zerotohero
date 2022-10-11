#include <iostream>

int main() {
    double inputs[] = {1.0, 2.0, 3.0};
    double weights[] = {3.1, 2.1, 8.7};
    double bias = 3.0;

    double output = inputs[0] * weights[0] +
                    inputs[1] * weights[1] + 
                    inputs[2] * weights[2] + 
                    bias;

    std::cout << output << std::endl;
}
