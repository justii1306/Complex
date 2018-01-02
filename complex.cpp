#include "complex.h"
#include <stdio.h>
#include <iostream>
#include <cmath>

float complex::getreal(){
    return this->real;}

float complex::getimag(){
    return this->imag;}

complex::complex(float r, float i){
    this->real=r;
    this->imag=i;}

complex operator +(complex s1, complex s2){
    float r, i;
    r=s1.real+s2.real;
    i=s1.imag+s2.imag;
    complex temp(r,i);
    return temp;
    }

complex operator -(complex s1, complex s2){
    float r, i;
    r=s1.real-s2.real;
    i=s1.imag-s2.imag;
    complex temp(r,i);
    return temp;
    }

complex operator *(complex s1, complex s2){
    float r, i;
    r=(s1.real*s2.real)-(s1.imag*s2.imag);
    i=(s1.imag*s2.real)+(s1.real*s2.imag);
    complex temp(r,i);
    return temp;
    }

complex operator /(complex s1, complex s2){
    complex s(s2.getreal(),-(s2.getimag()));
    complex temp=s*s1;
    float r=temp.getreal()/(sqrt(s2.getreal())+sqrt(s2.getimag()));
    float i=temp.getimag()/(sqrt(s2.getreal())+sqrt(s2.getimag()));
    complex w(r,i);
    return w;}

complex& complex::operator+=(complex& s2){
    this->real=this->real+s2.real;
    this->imag=this->imag+s2.imag;
    return *this;}

complex& complex::operator-=(complex& s2){
    this->real=this->real-s2.real;
    this->imag=this->imag-s2.imag;
    return *this;}

complex& complex::operator*=(complex& s2){
    float r,i;
    r=(this->real*s2.real)-(this->imag*s2.imag);
    i=(this->imag*s2.real)+(this->real*s2.imag);
    this->real=r;
    this->imag=i;
    return *this;}
/*
complex& complex operator /=(complex s2){
    complex s(s2.getreal(),-(s2.getimag()));
    this=(this*s)/(sqrt(s2.getreal())+sqrt(s2.getimag()));
    return *this;}
*/
bool complex::operator ==(complex s2){
    return(this->real==s2.real && this->imag==s2.imag)?1:0;}


std::ostream& operator <<(std::ostream &s,complex &b){
    s<<"z = "<<b.real<<((b.imag >= 0) ? "+" :"")<<b.imag<<"i";
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



