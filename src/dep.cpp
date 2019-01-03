#include "dep.hpp"
void MyCalulate::myAdd(){
    printf("void myadd");
}
int MyCalulate::myAdd(int a, int b)
{
    return a + b;
}
MyCalulate::MyCalulate(int a, int b){
    this->inta=a;
    this->intb=b;
}
MyCalulate::~MyCalulate(){}







