#include <iostream>
#include "point2.h"
#include <cmath>
using namespace std;

Point2::Point2(float x, float y){
  _x = x;
  _y = y;
}

float Point2::DistanceBetween(Point2 p) {
  float tempX = this->_x - p._x;
  float tempY = this->_y - p._y;
  return sqrt(tempX*tempX + tempY*tempY);
}

int Point2::Quadrant(){
  if(_x == 0 && _y == 0){
    return 0;
  } else if ((_x >=  1 && _y >= 1) ||(_x > 0 && _y == 0)){
    return 1;
  } else if ((_x <= -1 && _y >= 1) || (_x == 0 && _y > 0)){
    return 2;
  } else if ((_x <= -1 && _y <= -1) || (_x < 0 && _y == 0)){
    return 3;
  } else if ((_x >= 1 && _y <= -1) || (_x == 0 && _y < 0)){
    return 4;
  } else{
    return -1;
  }
  
}

void Point2::Print(){
  cout << "x: " << this->_x << "y: " << this->_y << endl; 
}