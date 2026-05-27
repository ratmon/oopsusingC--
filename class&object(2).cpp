#include<iostream>
using namespace std;

class car{
    public:

        string brand;
        int price;

        void display(){
            cout<<"cars:"<<endl;

        }
        void display2(){
            cout<<"price:"<<endl;
        }


};

int main(){
    car c,c1,c2,c3;
    c.display();
    c1.brand="Jaguar f-type";
    c2.brand="mustand gt";
    c3.brand="mercedes benz s class";
    cout<<"car 1:"<<c1.brand<<endl;
    cout<<"car 2:"<<c2.brand<<endl;
    cout<<"car 3:"<<c3.brand<<endl;

    c.display2();
    c1.price=1000000;
    c2.price=7400000;
    c3.price=1000000;
    cout<<"car 1 price:"<<c1.price<<endl;
    cout<<"car 2 price:"<<c2.price<<endl;
    cout<<"car 3 price:"<<c3.price<<endl;
    return 0;
}