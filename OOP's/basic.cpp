#include <iostream>
#include <string>
using namespace std;
class Teacher{
    private:
    double salary;
    public:          // access modifiers
    //properties/attributes
    string name;
    string dept;
    string subject;
    
    //methods-- this is called member function in c++
    void changeDept(string newDept){
        dept = newDept;
    }
    void setsalary(double s){
        salary = s;
    }
    //getter 
    double getsalary(){
        return salary;
    }
       
};
int main(){

    Teacher t1;  // here t1 is object
    Teacher t2;  // here t2 is object
    t1.name = "neha";
    t1.dept = "CSE";
    t1.subject = "c++";
    t1.setsalary = 100000;
    cout<<"name : "<<t1.name<<endl<<"salary : "<<t1.setsalary<<endl;
    
    return 0;
}
