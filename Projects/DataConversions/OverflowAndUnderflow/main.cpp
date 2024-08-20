#include <iostream>

int main()
{

    // Overflow

    unsigned char data{250};

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << std::hex << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << std::hex << static_cast<int>(data) << std::endl;

    std::cout << std::dec;

    data = 1;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    --data;

    std::cout << "data : " << static_cast<int>(data) << std::endl;

    return 0;
}