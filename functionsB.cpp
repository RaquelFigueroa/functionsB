//Name:Raquel Figueroa
//Date:13 October 2015
//Description: functionsB.cpp

#include <iostream>//cin, cout
#include <cassert>//asserts
#include <cmath>//fabs

using namespace std;

//double feetToInches(double val);//#1.A.returns value of feet converted to inches

void feetToInches(double&  val);//#1.B.passes value of feet converted to inches

double computeRectangle(double valA, double valB);//#2.A.returns rectangle area

void computerArea (double valA, double valB, double& valC);//#2.B.passes area of rect

void computerArea (double valA, double valB, double& valArea, double&            valPerimeter);//#3.calculates and passes values for perimeter and area

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);//#4.passes values of argument's sum and average

void calcAreaPerimeter(double radius, double& area, double& perimeter);
    //#5. returns values for circle area and perimeter

double calcArea(double length, double width);//#6.returns area of rectangle

int main()
{
    double e = 0.00001;
    double r;//declaration for radius variable
    double a;//declaration for area variable
    double p;//declaration for perimeter variables
    double w;//declaration for width variable
    double l;//declaration for length variable

    /*assert for double feetToInches() passed! 
    assert(feetToInches(3.5) == 42);
    assert(fabs(feetToInches(4.11) - 49.32) < e);*/
    
    //asserts for void feetToInches() passed!
    double feet(3.5);
    feetToInches(feet);
    assert(fabs(feet) - 42 < e);//assert passed!
    feet = 4.11;
    feetToInches(feet);
    assert(fabs(feet - 49.32) < e);//assert passed!
    
    //asserts for double computeRectangle() passed!
    assert(fabs(computeRectangle(14, 2.5) - 35) < e);
    assert(fabs(computeRectangle(1.15, 5.22) - 6.003) < e);
    
    //asserts for void computerArea () passed!
    w = 14;
    l = 2.5;
    computerArea(w, l, a);
    assert(fabs(a) - 35 < e);
    w = 1.15;
    l = 2.5;
    computerArea(w, l, a);
    assert(fabs(a) - 6.003 < e);
    
    //assert for void computerArea to compute area and perimeter passed!
    w = 45.62;
    l = 11.123;
    computerArea(w, l, a, p);
    assert(fabs(a) - 507.43126 < e);
    assert(fabs(p) - 113.486 < e);
    w = 99.67;
    l = 1.111;
    computerArea(w, l, a, p);
    assert(fabs(a) - 110.73337 < e);
    assert(fabs(p) - 201.562 < e);
    
    //asserts for void stats function passed!
    double numA(23.76), numB(77.0), numC(7.001), numD(2.2457), numE, numF;
    stats(numA, numB, numC, numD, numE, numF);
    assert(fabs(numE - 110.0067) < e);
    assert(fabs(numF - 27.501675) < e);
    numA = 87.88;
    numB = 12.66;
    numC = 0.00004;
    numD = 1.123006;
    stats(numA, numB, numC, numD, numE, numF);
    assert(fabs(numE - 101.663046) < e);
    assert(fabs(numF - 25.4157615) < e);
    
    //asserts for void calcAreaPerimeter function passed!
    r = 12.25;
    calcAreaPerimeter(r, a, p);
    assert(fabs(a) - 471.19625 < e);
    assert(fabs(p) - 76.93 < e);
    r = 1.0001;
    calcAreaPerimeter(r, a, p);
    assert(fabs(a) - 3.140628 < e);
    assert(fabs(p) - 6.280628 < e);
    
    //asserts for calcArea function passed!
    assert(fabs(calcArea(22.12, 3.12) - 69.0144) < e);
    assert(fabs(calcArea(2.001, 9.1) - 18.2091) < e);
    
    cout <<"It Ran!!!"<< endl;

    return 0;
}
/*double feetToInches(double val)
{
    double inches(val * 12);
    return inches;
}*/

void  feetToInches(double&  val)
{
    val = val * 12;
    return;
}

double computeRectangle(double valA, double valB)
{
    double area = valA * valB;
    return area;
}

void computerArea (double valA, double valB, double& valC)
{
    valC = valA * valB;
}

void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valPerimeter = valA + valA + valB + valB;
    valArea = valA * valB;
}

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = valA + valB + valC + valD; //sum
    valF = valE / 4; //average
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    const double PI = 3.14;
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
}

double calcArea(double length, double width)
{
    double area = length * width;
    return area;
}
