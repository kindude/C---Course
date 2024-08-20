#include <iostream>
#include <bitset>

int main(){


    //shifting left is multimplying by 2^n - where n is bits moved

    //shfitng right is dividing by 2^n - where n is bits moved

    unsigned short int value {0xff0u};
    
    std::cout<< "Size of short int " << sizeof(short int) << std::endl;

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    //shifting left 1 bit

    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    //shifting left 1 bit

    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    //shifting left 1 bit

    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    //shifting left 1 bit

    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    //shifting left 1 bit

    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    //shifting right 1 bit

    value = static_cast<unsigned short int>(value >> 1);

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;


    //shifting right 4 bit

    value = static_cast<unsigned short int>(value >> 4);

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;


    std::cout << "value : "<< (value >> 1) << std::endl;
    

    return 0;
}