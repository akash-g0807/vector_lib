#include <math.h>
#include <iostream>
#include "vec3d.h"


// Constructor implementation

vec3d::vec3d(){
    x = 0;
    y = 0;
}

vec3d::vec3d(float x, float y){
    this->x = x;
    this->y = y;
}

void vec3d::Log(){

    if(y>0){
        std::cout << "Vector: " << x << "i + " << y << "j" << std::endl;
    }
    else if(y < 0){
        std::cout << x << ".i - " << -1*y << ".j" << std::endl; 
    }
         
}



