//
// Created by Seçkin KÜKRER on 9.02.2021.
//

#ifndef QUIZ2_DORTGEN_H
#define QUIZ2_DORTGEN_H

#include <iostream>

class Dortgen {
protected:
    double solx, soly,
           sagx, sagy;

public:
    Dortgen(double a = 0, double b = 0, double c = 0, double d = 0):
    solx(a), soly(b), sagx(c), sagy(d) {}

    void yaz();
    void setSolUst(double, double);
    void setSagAlt(double, double);

    double getEn();
    double getBoy();
    double getAlan();
    double getCevre();

    Dortgen buyukOlan(Dortgen);
    void kareYap();
};


#endif //QUIZ2_DORTGEN_H
