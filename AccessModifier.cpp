#include <iostream>
using namespace std;

class Car{
    private :
        string brand;    //accessible within same class
        
    protected:
        int speed = 100;   //accessible within same package and subclass (inherited)
        
    public:                     //accessible everywhere
        void setInfo(string b){
            brand = b;     //used to setvalue of private so to access private member -> ENCAPSULATION
        }
        
        string getInfo(){
            return brand;      //used to getvalue of private so to access private member -> ENCAPSULATION
        }
        
        void info(){     //method 
            cout << "brand is: " << brand << " & speed is " << speed << endl;
        }
};

class sportcar : public Car{          //sportcar inherits class car
    public: 
    void carspeed(){
        speed = speed + 150;            //protected vlaue can be accessed in subclass inherited      
        cout << "SportCar speed " <<  speed << endl;    //if try to cout: brand ,it will not bcoz its private -> within same class
    }
}; 

int main(){
    
    Car c1;                        //object created
    // c1.brand = "bmw";
    c1.setInfo("bmw");
    c1.info();
    
    sportcar c2;
    // c2.speed = 100;
    c2.carspeed();
 }
