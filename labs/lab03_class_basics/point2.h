#ifndef POINT2_H
#define POINT2_H

class Point2{
    float _x;
    float _y;

    public:
        Point2(float x = 0.0, float y = 0.0);
        float DistanceBetween(Point2 p);
        int Quadrant();
        void Print();
};

#endif