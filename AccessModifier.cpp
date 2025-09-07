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
            cout << "brand is: " << getInfo() << " & speed is " << speed << endl;
        }
};

class sportcar : public Car{          //sportcar inherits class car
    public: 
    void carspeed(){
        speed = speed + 150;            //protected vlaue can be accessed in subclass inherited      
        cout << getInfo() << " speed " <<  speed << endl;    //if try to cout: brand ,it will not bcoz its private -> within same class
    }
}; 

int main(){
    
    Car c1;                        //object created
    // c1.brand = "bmw";
    c1.setInfo("bmw");
    c1.info();
    
    sportcar c2;
    // c2.speed = 100;
    c2.setInfo("porsche");
    c2.carspeed();
    c2.info();
 }

-----------------------------

brand is: bmw & speed is 100
porsche speed 250
brand is: porsche & speed is 250


=== Code Execution Successful ===






















JAVA


class Car{
    private String brand;
    
    public void setInfo(String b) {
        brand = b;
    }
    
    public String getInfo(){
        return brand;
    }
    
    protected int speed = 100;
    
    void info() {
        System.out.println("brand is : " + brand + " & speed is " + speed);
    }
}

class Sportcar extends Car {
    void speed() {
        speed = speed + 150;
        System.out.println(getInfo() + " speed is : " + speed );
    }
    
    
    
}

class Main {
    public static void main(String[] args){
        Car c1 = new Car();
        c1.setInfo("bmw");
        c1.info();
        
        Sportcar c2 = new Sportcar();
        c2.setInfo("porsche");
        c2.speed();
        
        c2.info();
    }
}

------------------------------

brand is : bmw & speed is 100
porsche speed is : 250
brand is : porsche & speed is 250
