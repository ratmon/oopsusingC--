#include<iostream>
using namespace std;

class Rectangle{
    public:
            int l,b;
            void input(){
                l=50;
                b=20;
                
            }

            void area(){
                cout<<"Area of Rectangle:"<<l*b<<endl;
            }

            void perimeter(){
                cout<<"Perimeter of Rectangle:"<<2*(l*b)<<endl;
            }


};
int main(){
    Rectangle r1;
    r1.input();
    r1.area();
    r1.perimeter();
    return 0;
     



}