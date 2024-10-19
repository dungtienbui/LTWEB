//
//  libraryDescarter.cpp
//  Descarter
//
//  Created by BÙI TIẾN DŨNG on 04/08/2022.
//

#include "libraryDescarter.hpp"


//Define Descartes
Descartes::Descartes(){
    x = 0;
    y = 0;
}
Descartes::Descartes(int w){
    x = w;
    y = w;
}
Descartes::Descartes(int x, int y){
    this->x = x;
    this->y = y;
}

int Descartes::getX(){
    return this->x;
}
int Descartes::getY(){
    return this->y;
}
void Descartes::setX(int x){
    this->x = x;
}
void Descartes::setY(int y){
    this->y = y;
}

void Descartes::printDes(){
    cout << "(" << x << ";" << y << ")";
}

void Descartes::set(){
    x = 0;
    y = 0;
}
void Descartes::set(int w){
    x = w;
    y = w;
}
void Descartes::set(int x, int y){
    this->x = x;
    this->y = y;
}

double Descartes::distancePoint(const  Descartes& other){
    return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}

Descartes Descartes::operator-(Descartes other){
    Descartes res;
    res.x = x - other.x;
    res.y = y - other.y;
    return res;
}
Descartes Descartes::operator-(){
    x = -x;
    y = -y;
    return *this;
}
Descartes Descartes::operator+(Descartes other){
    Descartes res;
    res.x = x + other.x;
    res.y = y + other.y;
    return res;
}
int Descartes::operator*(Descartes other){
    return (x*other.x + y*other.y);
}


//Define triangle
Triangle::Triangle(){
    a.x = 0;
    a.y = 0;
    b.x = 1;
    b.y = 0;
    c.x = 0;
    c.y = 1;
}
Triangle::Triangle(const Descartes& a, const Descartes& b, const Descartes& c){
    this->a = a;
    this->b = b;
    this->c = c;
}
void Triangle::inputTriangle(){
    cout << "Nhap toa do ba dinh cua tam giac" << endl;
    cout << "Toa do dinh thu nhat: ";
    cin >> a.x >> a.y;
    cout << "Toa do dinh thu hai: ";
    cin >> b.x >> b.y;
    cout << "Toa do dinh thu ba: ";
    cin >> c.x >> c.y;
}
void Triangle::printVertexTriangle(){
    cout << "Toa do ba dinh cua Triangle: ";
    cout << "(" << a.x << ";" << a.y << ") ";
    cout << "(" << b.x << ";" << b.y << ") ";
    cout << "(" << c.x << ";" << c.y << ") ";
}
void Triangle::printEdgeTriangle(){
    double c1 = a.distancePoint(b);
    double c2 = b.distancePoint(c);
    double c3 = c.distancePoint(a);
    cout << "Do dai cac canh cua Triangle: ";
    cout <<fixed << setprecision(3) << c1 << " " << c2 << " " << c3;
}
double Triangle::areaTriangle(){
    double area = 0;
    area = abs((b.x - a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y))*0.5;
    return area;
}
bool Triangle::checkTriangle(){
    if (this->areaTriangle() != 0){
        return 1;
    }else{
        return 0;
    }
}
bool Triangle::checkRightTriangle(){
    Descartes x1;
    Descartes x2;
    Descartes x3;
    x1 = a - b;
    x2 = b - c;
    x3 = c - a;
    if (x1*x2 == 0 || x2*x3 == 0 || x3*x1 == 0){
        return 1;
    }else{
        return 0;
    }
}
bool Triangle::checkIsosceleTriangle(){
    double c1 = a.distancePoint(b);
    double c2 = b.distancePoint(c);
    double c3 = c.distancePoint(a);
    if (abs(c1 - c2) < 0.0001 || abs(c2 - c3) < 0.0001 || abs(c3 - c1) < 0.0001){
        return 1;
    }else{
        return 0;
    }
}
bool Triangle::checkEquilateralTriangle(){
    double c1 = a.distancePoint(b);
    double c2 = b.distancePoint(c);
    double c3 = c.distancePoint(a);
    if (abs(c1 - c2) < 0.0001 && abs(c2 - c3) < 0.0001){
        return 1;
    }else{
        return 0;
    }
}
