#include <math.h>
#include <iostream>
#include "vec3d.h"


// Constructor implementation

vec3d::vec3d(){
    x = 0;
    y = 0;
    z = 0;
}

vec3d::vec3d(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
}

void vec3d::Log(){

    if(y < 0 && z < 0){
        std::cout << x << ".i - " << -1*y << ".j - " << -1*z << std::endl;  
    }

    else if(y < 0 and z > 0){
        std::cout <<  x << ".i - " << -1*y << ".j + " << z << std::endl; 
    }

    else if (y > 0 && z < 0){
        std::cout << x << ".i + " << y << ".j - " << -1*z << std::endl; 
    }
    else{
        std::cout << x << ".i + " << y << ".j + " << z << std::endl; 
    }

}

float vec3d::magnitude(){
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}

