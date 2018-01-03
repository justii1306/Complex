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
    std::cout<<"czesc rzeczywsita "<<(r1.getreal())<<std::endl;
    std::cout<<"czesc urojona "<<(r1.getimag())<<std::endl;
    w=r1/r2;
    std::cout<<"/: "<<w<<std::endl;
    r1/=r2;
    std::cout<<"/=: "<<r1<<std::endl;
    wf=r1.amplituda();
    std::cout<<"amplituda "<<wf<<std::endl;
    wf=r1.faza();
    std::cout<<"amplituda "<<wf<<std::endl;
    //gdy jedna z liczb nie jest liczbą zespoloną 
    w=r1+8;
    std::cout<<"+: "<<w<<std::endl;
    w=8+r1;
	std::cout<<"+: "<<w<<std::endl;
	w=r1*3;
	std::cout<<"+: "<<w<<std::endl;
    return 0;}

