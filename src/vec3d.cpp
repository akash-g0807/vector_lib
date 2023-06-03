#include <math.h>
#include <iostream>
#include "vec3d.h"


/**
 * Constructor implementation
*/
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

/** 
 * Logging Function
*/
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

/**
 * Calculating Magnitude of Vector using standard formula
*/
float vec3d::Magnitude(){
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}


/**
 * Adding Two Vectors
*/
void vec3d::Add(vec3d& v){
    x = x + v.x; 
    y = y + v.y;
    z = z + v.z;
}

/**
 * Subtracting 2 vectors
*/
void vec3d::Subtract(vec3d& v){
    x = x - v.x;
    y = y - v.y;
    z = z - v.z;
}

/**
 * Calculating Dot Product of Vectors
*/
float vec3d::Dot_Product(vec3d& v){
    return (x * v.x) + (y * v.y) + (z * v.z);
}

/**
 * Scalar Multiplication
*/
void vec3d::Scalar_Mult(float n){
    x = n*x; 
    y = n*y;
    z = n*z;
}

/**
 * Unit Vector 
*/
vec3d vec3d::Unit_Vector(){
    vec3d unit_Vector;
    float magnitude = Magnitude();

    if (magnitude !=0){
        unit_Vector.x = x/magnitude;
        unit_Vector.y = y/magnitude;
        unit_Vector.z = z/magnitude;
    }

    return unit_Vector;
}

/**
 * Using Cross Product
*/
vec3d vec3d::Cross_Product(vec3d& u, vec3d& v){
    vec3d perpendicular_vector;

    perpendicular_vector.x = (u.y*v.z) - (u.z*v.y);
    perpendicular_vector.y = (u.z*v.x) - (u.x*v.z);
    perpendicular_vector.z = (u.x*v.y) - (v.x*u.y);

    return perpendicular_vector;    
}

