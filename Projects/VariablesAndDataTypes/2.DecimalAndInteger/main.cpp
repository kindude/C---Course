#include <iostream>
using namespace std;

int main(){

    //Braced initialisation

    // int elephant_count;

    // int lion_count{}; //Initialises to zero

    // int dog_count {10};

    // int cat_count {15};

    // int domesticated_amimal { dog_count + cat_count };


    // std::cout << "Elephant count " << elephant_count << std::endl;
    // std::cout << "Lion count " << lion_count << std::endl;
    // std::cout << "Dog count " << dog_count << std::endl;
    // std::cout << "Cat count " << cat_count << std::endl;
    // std::cout << "Domesticated animal " << domesticated_amimal << std::endl;


    //Functional initialisation


    // int apple_count(5);
    // int orange_count(10);
    // int fruit_count (apple_count + orange_count);

    // int narrowing_conversion_functional (2.9);

    // cout << "Apple Count " << apple_count << endl;
    // cout << "Orange Count " << orange_count << endl;
    // cout << "Fruit Count " << fruit_count << endl;
    // cout << "Narrowing conversion " << narrowing_conversion_functional << endl;
    
    //Assignemtn notation

     int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count +truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike count : " << bike_count << std::endl;
    std::cout << "Truck count : " << truck_count << std::endl;
    std::cout << "Vehicle count : " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_assignment << std::endl;
    

    //Check the size with sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;
    
    return 0;
    
    return 0;
}