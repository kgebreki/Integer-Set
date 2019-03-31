#include <iostream>
#include "IntegerSet.h"
using namespace std;
/*
 * Kaleb Gebrekirstos
 * Here is the driver class. It works by asking the user to enter elements into to sets A & B and then performing
 * the set operations intersection, union, set complement, set difference. Furthermore, it checks if the two sets
 * are equal and if one set is a subset of another.
 */

int main() {
    bool flag = false;
    char finish = ' ';
    int elements = 0;
    //Main loop to initiate program. Asks user if they wish to start over at the end.
    do{
        IntegerSet setA, setB, setC;
        cout << "Please enter set A one element at a time. The range of the set is 0 through 100 (inclusive). \n"
                "Enter -1 when you are done entering elements into set A. \n";
        while(elements != -1){
            cout << "Enter an element: " << "\n";
            cin >> elements;
            setA.insertElement(elements);
        }
        elements = 0;
        cout << "Set A: ";
        setA.printSet();
        cout << " " << endl;
        cout << "Please enter set B one element at a time. The range of the set is 0 through 100 (inclusive). \n"
                "Enter -1 when you are done entering elements into set B. \n";
        while(elements != -1){
            cout << "Enter an element: " << "\n";
            cin >> elements;
            setB.insertElement(elements);
        }
        elements = 0;
        cout <<"Set B: ";
        setB.printSet();
        cout << " " << endl;
        cout <<"Enter any elements you want to delete from set A one at a time\n"
               "Enter -1 when you are done deleting from set A.\n";
        while(elements != -1){
            cout << "Enter an element to delete: " << "\n";
            cin >> elements;
            setA.deleteElement(elements);
        }
        elements = 0;
        cout << "Set A: ";
        setA.printSet();
        cout << " " << endl;
        cout <<"Enter any elements you want to delete from set B one at a time\n"
               "Enter -1 when you are done deleting from set B.\n";
        while(elements != -1){
            cout << "Enter an element to delete: " << "\n";
            cin >> elements;
            setB.deleteElement(elements);
        }
        elements = 0;
        cout << "Set B: ";
        setB.printSet();
        cout << " " << endl;

        ///////////Demonstration//////////////////////////////
        cout << "Set A: ";
        setA.printSet();
        cout << "Set B: ";
        setB.printSet();
        //Intersection of A and B
        setC = setA;
        cout << "The intersection of Set A and B (A n B) = ";
        setA.Intersect(setB);
        setA.printSet();
        //Union of A and B
        setA = setC;
        cout << "The Union of Set A and B (A U B) = ";
        setA.Unionize(setB);
        setA.printSet();
        //Complement of A
        setA = setC;
        cout << "The complement of A (~A) = ";
        setA.Complement();
        setA.printSet();
        //Complement of AUB
        setA = setC;
        cout << "The complement of A union B ~(A U B) = ";
        setA.Unionize(setB);
        setA.Complement();
        setA.printSet();
        //Difference of A and B
        setA = setC;
        cout << "The difference of A and B (A-B) = ";
        setA.Difference(setB);
        setA.printSet();
        //Is A a subset of B
        setA = setC;
        if(setA.Subset(setB))
            cout << "Set A is a subset of Set B. " << endl;
        else
            cout << "Set A is not a subset of Set B." << endl;
        //Is B a subset of A
        if(setB.Subset(setA))
            cout << "Set B is a subset of Set A. " << endl;
        else
            cout << "Set B is not a subset of Set A." << endl;
        //Is A empty
        if(setA.isEmpty())
            cout << "Set A is empty." << endl;
        else
            cout << "Set A is not empty." << endl;
        //Is B empty
        if(setB.isEmpty())
            cout << "Set B is empty." << endl;
        else
            cout << "Set B is not empty." << endl;
        //Is A equal to B
        if(setA.isEqualTo(setB))
            cout << "Set A = Set B. " << endl;
        else
            cout << "The two sets are not equal." << endl;

        cout << "Would you like to enter new Integer Sets? (Y/N)" << endl;
        cin >> finish;
        if (finish == 'N' || finish == 'n')
        {
            flag = true;
        }
    }while (!flag);
    cout << "Thank you, have a great day!";
}