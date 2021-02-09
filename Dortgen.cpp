//
// Created by Seçkin KÜKRER on 9.02.2021.
//

#include "Dortgen.h"

void Dortgen::setSolUst(double x_, double y_) {
    this->solx = x_;
    this->soly = y_;
}

void Dortgen::setSagAlt(double x_, double y_) {
    this->sagx = x_;
    this->sagy = y_;
}

double Dortgen::getEn() {
    return this->soly - this->sagy;
}

double Dortgen::getBoy() {
    return this->sagx - this->solx;
}

double Dortgen::getAlan() {
    return this->getBoy() * this->getEn();
}

double Dortgen::getCevre() {
    return 2* (this->getEn() + this->getBoy());
}

void Dortgen::yaz() {
    {
        using namespace std;

        cout << "(("
        << this->solx << "," << this->soly
        << ")-("
        << this->sagx << "," << this->sagy
        << "))";
    }
}

Dortgen Dortgen::buyukOlan(Dortgen d_) {
    return this->getAlan() >= d_.getAlan() ?
        *this : d_;
}

void Dortgen::kareYap() {
    double en_ = this->getEn();
    double boy_ = this->getBoy();

    if(en_ == boy_)
        return;
    else if(en_ < boy_){
        double fark_ = en_ - boy_;
        this->sagx += fark_;
    }
    else if(en_ > boy_){
        double fark_ = en_ - boy_;
        this->sagy += fark_;
    }
}
