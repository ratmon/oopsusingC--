#include<iostream>
using namespace std;

class Student{
    public:
            string name;
            string rollno;
            double marks;

            void input(){
                name="ayush";
                rollno="25scs1003003997";
                marks=80;

            }

            void display(){
                cout<<"Name="<<name<<endl;
                cout<<"rollno="<<rollno<<endl;
                cout<<"marks="<<marks;

            }
};

int main(){
    Student s1;
    s1.input();
    s1.display();
    
    return 0;
}