#include "complex.h"
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>

float complex::getreal(){
    return this->real;}

float complex::getimag(){
    return this->imag;}

complex::complex(float r, float i){
    this->real=r;
    this->imag=i;}

complex operator +(complex s1, complex s2){
    float r, i;
    r=s1.getreal()+s2.getreal();
    i=s1.getimag()+s2.getimag();
    complex temp(r,i);
    return temp;
    }

complex operator -(complex s1, complex s2){
    float r, i;
    r=s1.getreal()-s2.getreal();
    i=s1.getimag()-s2.getimag();
    complex temp(r,i);
    return temp;
    }

complex operator *(complex s1, complex s2){
    float r, i;
    r=(s1.getreal()*s2.getreal())-(s1.getimag()*s2.getimag());
    i=(s1.getimag()*s2.getreal())+(s1.getreal()*s2.getimag());
    complex temp(r,i);
    return temp;
    }

complex operator /(complex s1, complex s2){
    float r,i,d;
    d=(s2.getreal()*s2.getreal()+s2.getimag()*s2.getimag());
    r=(s1.getreal()*s2.getreal()+s1.getimag()*s2.getimag())/d;
    i=(s1.getimag()*s2.getreal()-s1.getreal()*s2.getimag())/d;
    complex w(r,i);
    return w;}

complex& complex::operator+=(complex& s2){
    this->real=this->real+s2.getreal();
    this->imag=this->imag+s2.getimag();
    return *this;}

complex& complex::operator-=(complex& s2){
    this->real=this->real-s2.getreal();
    this->imag=this->imag-s2.getimag();
    return *this;}

complex& complex::operator*=(complex& s2){
    float r,i;
    r=(this->real*s2.getreal())-(this->imag*s2.getimag());
    i=(this->imag*s2.getreal())+(this->real*s2.getimag());
    this->real=r;
    this->imag=i;
    return *this;}

complex& complex::operator/=(complex& s2){
    float r,d;
    d=(s2.getreal()*s2.getreal()+s2.getimag()*s2.getimag());
    r=(this->real*s2.getreal()+this->imag*s2.getimag())/d;
    this->imag=(this->imag*s2.getreal()-this->real*s2.getimag())/d;
    this->real=r;
    return *this;}

bool complex::operator ==(complex s2){
    return(this->real==s2.getreal() && this->imag==s2.getimag())?1:0;}


std::ostream& operator <<(std::ostream &s,complex &b){
    s<<"wynik = "<<b.real<<((b.imag >= 0) ? "+" :"")<<b.imag<<"i";
    return s;
}

void complex::operator =(complex w){
    real=w.real;
    imag=w.imag;
    }

float complex::amplituda(){
    return sqrt((this->real*this->real)+(this->imag*this->imag));}

float complex::faza(){
    return atan2(imag,real);}

