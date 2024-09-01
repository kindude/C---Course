#include <iostream>
#include <string>



int main(){
    
    int max{};

    int a{35};
    int b{20};

    std::cout << "using ternary opearator" << std::endl;

    max = (a > b) ? a : b;

    std::cout << "The max is " << max << std::endl;

    return 0;
}