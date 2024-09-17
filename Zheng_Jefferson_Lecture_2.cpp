/*
Jefferson Zheng
Lecture 2
September 16, 2024
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int integer1 = 1;
    int inches = 100;
    float decimal1 = 1.0;
    double decimal2 = 2.0;
    char characterA = 'A';
    char characterB = 'B';
    bool yes = true;
    string text = "text";

    cout << "integer1 = " << integer1 << endl;                                      //Prints the value of integer1
    cout << "inches = " << inches << endl;                                          //Prints the value of inches
    cout << "decimal1 = " << decimal1 << endl;                                      //Prints the value of decimal1
    cout << "decimal2 = " << decimal2 << endl;                                      //Prints the value of decimal2
    cout << "characterB = " << characterB << endl;                                  //Prints the value of characterA
    cout << "characterA = " << characterA << endl;                                  //Prints the value of characterB
    cout << "yes = " << yes << endl;                                                //Prints the value of yes
    cout << "text = " << text << endl << endl;                                      //Prints the value of text

    cout << inches << " inch(es) = ";                                               //Prints 100 inche(es)
    cout << inches / 12 << " feet (foot) and ";                                     //Prints feet (foot) and
    cout << inches % 12 << " inch(es)" << endl << endl;                             //Prints inch(es)

    cout << characterA << " is 'A', but " << characterB << " is 'B'." << endl;      //Prints A is 'A', but B is 'B'.
    cout << "(characterA < characterB) : " << (characterA < characterB) << "!" << endl << endl;

    cout << "2 + 3.5 = " << 2 + 3.5 << endl;                                        //Prints 2 + 3.5 = 5.5
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << endl;                                //Prints 6 / 4 + 3.9 = 4.9 (Incorrect for us)
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl;    //Prints 5.4 * 2 - (3.6 + 18 / 3) = -11.8

    return 0;
}

/*
integer1 = 1
inches = 100
decimal1 = 1
decimal2 = 2
characterB = B
characterA = A
yes = 1
text = text

100 inch(es) = 8 feet (foot) and 4 inch(es)

A is 'A', but B is 'B'.
(characterA < characterB) : 1!

2 + 3.5 = 5.5
6 / 4 + 3.9 = 4.9
5.4 * 2 - (13.6 + 18 / 2) = -11.8
*/