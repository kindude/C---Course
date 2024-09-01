#include <iostream>
#include <string>



int main(){
    
    int value;
    std::string to_print;
    std::cout<< "Please, type in an integral value : " << std::endl;

    std::cin >> value;

    to_print =  (value % 2 == 0) ? " is even" : " is odd"; 

    std::cout << value << to_print << std::endl;


    return 0;
}