#include <iostream> 
using namespace std; 

namespace LamborghiniCar{
    int output(){
        cout<<"Lambo" << endl; 

        return NULL; 
    }

}

namespace PorscheCar
{
    int output()
    {
        cout << "Porsche" << endl;

        return NULL;
    }

}

int main(){
    int magicNumber; 

    cout << "Elige" << endl; 

    cin>> magicNumber;

    if (magicNumber == 1)
    {

        cout << LamborghiniCar::output() << endl;
    }
    else if (magicNumber == 2)
    {

        cout << PorscheCar::output() << endl;
    }
    else
    {

        cout << "Please type the correct magic number" << endl;
    }
int x; 
    cin >> x;  

    return 0 ;
}