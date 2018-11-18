#include "complex.h"
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>

float complex::getreal() const{
    return this->real;}

float complex::getimag() const{
    return this->imag;}

complex::complex(float r, float i){
    this->real=r;
    this->imag=i;}

complex operator +(const complex s1, const complex s2){
    float r, i;
    r=s1.getreal()+s2.getreal();
    i=s1.getimag()+s2.getimag();
    complex temp(r,i);
    return temp;
    }

complex operator -(const complex s1, const complex s2){
    float r, i;
    r=s1.getreal()-s2.getreal();
    i=s1.getimag()-s2.getimag();
    complex temp(r,i);
    return temp;
    }

complex operator *(const complex s1, const complex s2){
    float r, i;
    r=(s1.getreal()*s2.getreal())-(s1.getimag()*s2.getimag());
    i=(s1.getimag()*s2.getreal())+(s1.getreal()*s2.getimag());
    complex temp(r,i);
    return temp;
    }

complex operator /(const complex s1, const complex s2){
    float r,i,d;
    d=(s2.getreal()*s2.getreal()+s2.getimag()*s2.getimag());
    r=(s1.getreal()*s2.getreal()+s1.getimag()*s2.getimag())/d;
    i=(s1.getimag()*s2.getreal()-s1.getreal()*s2.getimag())/d;
    complex w(r,i);
    return w;}

complex& complex::operator+=(const complex& s2){
    this->real=this->real+s2.getreal();
    this->imag=this->imag+s2.getimag();
    return *this;}

complex& complex::operator-=(const complex& s2){
    this->real=this->real-s2.getreal();
    this->imag=this->imag-s2.getimag();
    return *this;}

complex& complex::operator*=(const complex& s2){
    float r,i;
    r=(this->real*s2.getreal())-(this->imag*s2.getimag());
    i=(this->imag*s2.getreal())+(this->real*s2.getimag());
    this->real=r;
    this->imag=i;
    return *this;}

complex& complex::operator/=(const complex& s2){
    float r,d;
    d=(s2.getreal()*s2.getreal()+s2.getimag()*s2.getimag());
    r=(this->real*s2.getreal()+this->imag*s2.getimag())/d;
    this->imag=(this->imag*s2.getreal()-this->real*s2.getimag())/d;
    this->real=r;
    return *this;}

bool complex::operator ==(const complex s2){
    return(this->real==s2.getreal() && this->imag==s2.getimag())?1:0;}


std::ostream& operator <<(std::ostream &so,const complex &s1){
    so<<"wynik = "<<s1.getreal()<<((s1.getimag() >= 0) ? "+" :"")<<s1.getimag()<<"i";
    return so;
}

complex& complex::operator =(const complex w){
    this->real=w.getreal();
    this->imag=w.getimag();
    return *this;
    }

float complex::amplituda(){
    return sqrt((this->getreal()*this->getreal())+(this->getimag()*this->getimag()));}

float complex::faza(){
    return atan2(this->getimag(),this->getreal());}


