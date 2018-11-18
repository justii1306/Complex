#include <stdio.h>
#include "complex.h"

int main(){
    float wf;
    complex r1(7.1,5.1);
    complex r2(8.1,-3.1);
    std::cout<<"pierwsza liczba: "<<r1<<std::endl;
    std::cout<<"druga liczba: "<<r2<<std::endl;
    complex w=r1+r2;
    std::cout<<"+: "<<w<<std::endl;
    w=w-r2;
    std::cout<<"-: "<<w<<std::endl;
    w=r1*r2;
    std::cout<<"*: "<<w<<std::endl;
    w+=r2;
    std::cout<<"+=: "<<w<<std::endl;
    w-=r2;
    std::cout<<"-=: "<<w<<std::endl;
    w*=r1;
    std::cout<<"*=: "<<w<<std::endl;
    std::cout<<"w==w: "<<(w==w)<<std::endl;
    std::cout<<"w==r1: "<<(w==r1)<<std::endl;
    std::cout<<"czesc rzeczywsita "<<(r1.getreal())<<std::endl;
    std::cout<<"czesc urojona "<<(r1.getimag())<<std::endl;
    w=r1/r2;
    std::cout<<"/: "<<w<<std::endl;
    r1/=r2;
    std::cout<<"/=: "<<r1<<std::endl;
    wf=r1.amplituda();
    std::cout<<"amplituda "<<wf<<std::endl;
    wf=r1.faza();
    std::cout<<"faza "<<wf<<std::endl;
    //gdy jedna z liczb nie jest liczb¹ zespolon¹
	w=r1*10;
	std::cout<<"*10: "<<w<<std::endl;
	w=10*r1;
	std::cout<<"10*: "<<w<<std::endl;
	std::cout<<"+: "<<r1<<std::endl;
	std::cout<<"+: "<<r2<<std::endl;
	std::cout<<"+: "<<w<<std::endl;
    //dodawanie trzech liczb zespolonych
	std::cout<<"r1: "<<r1<<std::endl;
	std::cout<<"r2: "<<r2<<std::endl;
	std::cout<<"w: "<<w<<std::endl;
    r1+=r2+=w;
	std::cout<<"+=: "<<r1<<std::endl;
	complex r3(7.1,5.1);
	complex r4;
	complex r5=r4=r3;
	std::cout<<"r3: "<<r3<<std::endl;
	std::cout<<"r4: "<<r4<<std::endl;
	std::cout<<"r5: "<<r5<<std::endl;
    return 0;}

