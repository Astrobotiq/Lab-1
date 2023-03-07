#include <iostream>
using namespace std;
int main() {
    //Question 1
    cout<<"********* Question 1 ************"<<endl;
    string name;
    cout<<"What is your name?\n";
    cin>>name;
    cout<<"Hello "<<name<<endl;
    string id;
    cout<<"What is your School ID?\n";
    cin>>id;
    cout<<"Your Id is "<<id<<endl;

    //Question 2
    cout<<"********* Question 2 ************"<<endl;
    int var1;
    int var2;
    cout<<"Please enter first number\n";
    cin>>var1;
    cout<<"Please enter second number\n";
    cin>>var2;
    int sum = var1 + var2;
    int dif = var1 - var2;
    int prod = var1 * var2;
    cout<<"First number: " <<var1<<endl;
    cout<<"Second number: "<<var2<<endl;
    cout<<"sum of numbers: "<<sum<<endl;
    cout<<"diffrence of numbers: "<<dif<<endl;
    cout<<"product of numbers: "<<prod<<endl;

    //Question 3
    cout<<"********* Question 3 ************"<<endl;
    string stdName;
    int lab,midterm,final;
    cout<<"What is student's name?\n";
    cin>>stdName;
    cout<<"Please enter lab grade:\n";
    cin>>lab;
    cout<<"Please enter midterm grade:\n";
    cin>>midterm;
    cout<<"Please enter final grade:\n";
    cin>>final;
    float total = (lab/4)+(midterm*0.35)+(final*0.4);
    cout<<"Student name: "<<stdName<<endl;
    cout<<"Lab: "<<lab<<endl;
    cout<<"Midterm: "<<midterm<<endl;
    cout<<"Final: "<<final<<endl;
    cout<<"Last Score: "<<total<<endl;

    //Question 4
    cout<<"********* Question 4 ************"<<endl;
    cout<<"*\n**\n***\n**\n*"<<endl;


    return 0;
}
