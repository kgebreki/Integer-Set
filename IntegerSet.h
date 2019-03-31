#ifndef INTEGERSET_INTEGERSET_H
#define INTEGERSET_INTEGERSET_H
/*
 * Kaleb Gebrekirstos
 * CS 255 HW #7
 * 03/22/19
 * The aim of this assignment is to create a IntegerSet class that includes a driver program to test the
 * methods included in the class. The class shown here is the header file where the methods and variables are defined.
 */
//Header file
class IntegerSet{

public:
    void Intersect(IntegerSet x);
    void Unionize(IntegerSet x);
    void Complement();
    void Difference(IntegerSet x);
    bool Subset(IntegerSet x);
    bool isEmpty();
    bool isEqualTo(IntegerSet);//if statement
    void insertElement(int x);
    void deleteElement(int x);
    void printSet();//if statement
    IntegerSet();

private:
    bool set[101];
};
#endif //INTEGERSET_INTEGERSET_H
