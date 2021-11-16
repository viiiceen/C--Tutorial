#include <iostream> 
using namespace std; 

void byvalue_age_in_5(int age){

    age += 5; 

    cout << "in 5 you will be " << age << endl; 
} 

void byreference_age_in_5(int& age){

    age += 5;

    cout << "in 5 you will be " << age << endl; 
} 

int main(){

    int age =14; 

    byreference_age_in_5(age); 

    byvalue_age_in_5(age);

    return 0; 
}
