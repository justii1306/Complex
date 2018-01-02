#include <stdio.h>
#include "complex.h"

int main(){
    complex r1(7.1,5.1);
    complex r2(8.1,-3.1);
    complex test(r1);
    std::cout<<"r1: "<<r1<<std::endl;
    std::cout<<"r2: "<<r2<<std::endl;
    complex w=r1+r2;
    std::cout<<"w: "<<w<<std::endl;
    w=w-r2;
    std::cout<<"w: "<<w<<std::endl;
    w=r1*r2;
    std::cout<<"w: "<<w<<std::endl;
    w+=r2;
    std::cout<<"w: "<<w<<std::endl;
    w-=r2;
    std::cout<<"w: "<<w<<std::endl;
    w*=r1;
    std::cout<<"w: "<<w<<std::endl;
    std::cout<<"w==w: "<<(w==w)<<std::endl;
    std::cout<<"w: "<<(r1.getreal())<<std::endl;
    std::cout<<"w: "<<(r1.getimag())<<std::endl;
    w=r1/r2;
    r1/=r2;
    std::cout<<"w: "<<r1<<std::endl;
    return 0;}

