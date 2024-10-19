//
//  main.cpp
//  Descarter
//
//  Created by BÙI TIẾN DŨNG on 04/08/2022.
//

#include "libraryDescarter.hpp"


using namespace std;



int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    //Using class Descarter
    
    /*Descartes point;
    cout << "Toa do cua point: ";
    point.printDes();
    cout << endl;
    cout << "Thiet lap toa do cua point theo tung truc Ox = 100, Oy = 99:" << endl;
    point.setX(100);
    point.setY(99);
    cout << "Toa do cua point theo Ox: " << point.getX() << endl;
    cout << "Toa do cua point theo Oy: " << point.getY() << endl;

    
    Descartes a;
    cout << "Toa do cua a: ";
    a.printDes();
    cout << endl;
    
    Descartes b(3);
    cout << "Toa do cua b: ";
    b.printDes();
    cout << endl;
    
    Descartes c(999, 1000);
    cout << "Toa do cua c: ";
    c.printDes();
    cout << endl;
    
    cout << "Thay doi toa do cua a (Ox = 10, Oy = 10) bang lenh a.set(10), toa do cua a: ";
    a.set(10);
    a.printDes();
    cout << endl;
    
    cout << "Thay doi toa do cua b (Ox = -999, Oy = -1000) bang lenh b.set(-999, -1000), toa do cua b: ";
    b.set(-999, -1000);
    b.printDes();
    cout << endl;
    
    cout << "Thay doi toa do cua c (Ox = 0, Oy = 0) bang lenh c.set(), toa do cua c: ";
    c.set();
    c.printDes();
    cout << endl;
    
    
    cout << "a: ";
    a.printDes();
    cout << endl;
    cout << "b: ";
    b.printDes();
    cout << endl;
    cout << "Khoang cach hai diem a va b: ";
    cout << a.distancePoint(c);
    cout << endl;*/
    
    Descartes m(-4,-2);
    m.printDes();
    cout << endl;
    Descartes n(-2,-5);
    n.printDes();
    cout << endl;
    Descartes q(-6,-5);
    q.printDes();
    cout << endl;
    
    Triangle t(m,n,q);
    t.printVertexTriangle();
    cout << endl;
    t.printEdgeTriangle();
    cout << endl;
    cout << t.checkTriangle() << endl;
    cout << t.checkRightTriangle() << endl;
    cout << t.checkIsosceleTriangle() << endl;
    cout << t.checkEquilateralTriangle() << endl;
    cout << fixed << setprecision(4) << t.areaTriangle() << endl;
    
    return 0;
    
}
