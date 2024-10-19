//
//  libraryDescarter.hpp
//  Descarter
//
//  Created by BÙI TIẾN DŨNG on 04/08/2022.
//

#ifndef libraryDescarter_hpp
#define libraryDescarter_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


class Descartes{
    friend class Triangle;
private:
    int x;
    int y;
public:
    Descartes(); // constructer defaul
    Descartes(int); // constructer
    Descartes(int, int); // constructer
    
    int getX(); // lay toa do Ox
    int getY(); // lay toa do Oy
    void setX(int); // thiet lap Ox
    void setY(int); // thiet lap Oy
    
    void set(); // thay doi toa do diem, khong co tham so truyen vao => set ve goc toa do (0;0)
    void set(int); // thay doi toa do diem, co mot tham so w => set toa do x = y = w => (w;w)
    void set(int, int); // thay doi toa do diem, co hai tham so x, y => x = x, y = y => (x;y)
    
    void printDes(); // in ra toa do diem the cau truc (x,y)
    
    double distancePoint(const Descartes&); // tra ve khoang cach hai diem
    
    Descartes operator-(Descartes other);
    Descartes operator-();
    Descartes operator+(Descartes other);
    int operator*(Descartes other);
    
};

class Triangle{
private:
    Descartes a;
    Descartes b;
    Descartes c;
public:
    Triangle();
    Triangle(const Descartes&, const Descartes&, const Descartes&);
    void inputTriangle();
    void printVertexTriangle();
    void printEdgeTriangle();
    double areaTriangle();
    bool checkTriangle();
    bool checkRightTriangle();
    bool checkIsosceleTriangle();
    bool checkEquilateralTriangle();
};



#endif /* libraryDescarter_hpp */
