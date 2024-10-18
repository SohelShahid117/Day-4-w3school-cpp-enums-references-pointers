#include<iostream>
using namespace std;
int main(){
    //https://www.w3schools.com/cpp/cpp_enum.asp
    /*
    C++ Enumeration (enum),
    */

    cout<<"hello\n";

    struct {
        int id;
        string name;
        float gpa;
    }myResult;

    myResult.id = 101;
    myResult.name = "sohel";
    myResult.gpa = 2.83;

    cout<<myResult.id<<"\n";
    cout<< myResult.name<<"\n";
    cout<< myResult.gpa<<"\n";

    enum Level{
        low,
        medium,
        high
    };
   enum Level myVar = low;
   enum Level myVar2 = high;
   cout<<myVar<<"\n";
   cout<<myVar2<<"\n";

    enum Level2{
        LOW=22,
        // MEDIUM=33,
        // HIGH=98
        MEDIUM,
        HIGH
    };
    enum Level2 enumResult = MEDIUM;
    cout<<enumResult<<"\n";

    //Enum in a Switch Statement

    enum Level3{
        One=1,
        Two,
        Three,
        Four,
        Five
    };
    enum Level3 myNumber =Three;

    switch(myNumber){
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"Four";
            break;
        case 5:
            cout<<"Five";
            break;
    } 


    return 0;
}
/*
1.An enum is a special type that represents a group of constants (unchangeable values).
2.Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.
*/