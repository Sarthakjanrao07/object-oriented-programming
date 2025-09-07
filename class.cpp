// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        int year;
        
        void drive(){
            cout<< brand << " is driving" <<endl;
        }
        
        void info(){
            cout<< brand << " is built in " << year <<endl;
        }
};

int main() {
    Car c1;
    c1.brand = "bmw";
    c1.drive();
    c1.year = 2005;
    c1.info();

    return 0;
}
