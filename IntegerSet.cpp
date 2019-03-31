#include "IntegerSet.h"
#include <iostream>
using namespace std;
/*
 * Kaleb Gebrekirstos
 * Here is the method implementation class.
 */
//Default constructor
IntegerSet::IntegerSet() {
    for (int i = 0; i <= 100; i++)
    {
        set[i] = false;
    }
}
//Inserts elements into the array and stops when -1 is entered
void IntegerSet::insertElement(int x) {
    if (x != -1)
        set[x] = true;
}

void IntegerSet::deleteElement(int x) {
    if (x != -1)
        set[x] = false;
}

void IntegerSet::Intersect(IntegerSet x) {
    for (int i = 0; i <= 100; i++) {
        set[i] = set[i] && x.set[i];
    }
}

void IntegerSet::Unionize(IntegerSet x) {
    for (int i = 0; i <= 100; i++) {
        set[i] = set[i] || x.set[i];
    }
}

void IntegerSet::Complement() {
    for (int i = 0; i <= 100; i++){
        set[i] = !set[i];
    }
}

void IntegerSet::Difference(IntegerSet x) {
    x.Complement();
    Intersect(x);
}

bool IntegerSet::isEmpty() {
    for (int i = 0; i <= 100; i++){
        if (set[i])
            return false;
    }
    return true;
}

bool IntegerSet::isEqualTo(IntegerSet x){
    for (int i = 0; i <= 100; i++){
        if (set[i] != x.set[i])
            return false;
    }
    return true;
}

bool IntegerSet::Subset(IntegerSet x) {
    for (int i = 0; i <= 100; i++){
        if (set[i] && !x.set[i]){
            return false;
        }
    }
    return true;
}

void IntegerSet::printSet(){
    cout << "{ ";
    for (int i = 0; i <= 100; i++){
        if (set[i])
            cout << i << " ";
    }
    cout << "}" << endl;
}