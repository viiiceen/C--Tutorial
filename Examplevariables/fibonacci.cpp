#include <iostream>

const int POSITION = 10;

const int ALREADY_COMPUTED = 3; 

void print_tenth_fibonacci(){
    int n_1 = 1;

    int n_2 = 0;

    int current = n_1 + n_2;

    for (int i = ALREADY_COMPUTED; i < POSITION; ++i)
    {

        n_2 = n_1;

        n_1 = current;

        current = n_1 + n_2; 
    }

    std::cout << current << std::endl; 

}  

int main(){

    print_tenth_fibonacci(); 

    return 0; 
} 

