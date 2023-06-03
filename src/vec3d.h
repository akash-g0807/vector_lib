
#ifndef VECTOR_2D_H
#define VECTOR_2D_H

struct vec3d {
    float x;
    float y;
    float z;

    // Constructors
    vec3d();

    vec3d(float x, float y, float z);
 
    //Deconstructor
    //~vec2d() = default;

    // Vector Operations
    void Log();                     // Print vector to console in i j component form
    void Add(vec3d& v);             // Add vectors vector1.Add(vector2)
    void Subtract(vec3d& v);        // Subtract vectors vector1.Subtract(vector2)
    float Dot_Product(vec3d& v);    // Calculating Dot Product of 2 vectors vector1.Dot_Product(vector2)
    void Scalar_Mult(float n);      // Scalar Multiplication of vectors
    float Cross_Product(vec3d& v);  // Cross product magnitude of vectors
    float magnitude();              // Calculating magnitute/length of vectors
    vec3d Unit_Vector();            // Returns a unit vector of the current vector
    vec3d& Normalize();             // Normalizes the vector
    vec3d Normal();                 // Calculates the orthogonal vector of current object
    vec3d Rotate();                 // Rotates vector according to angle given in radians


    //Vector Operator Overloading
    vec3d& operator = (const vec3d& v);
    bool operator == (const vec3d& v);
    bool operator != (const vec3d& v);
    vec3d operator + (const vec3d& v);
    vec3d operator - (vec3d& v);
    vec3d operator * (float n);
    vec3d operator / (float n);
    vec3d operator - ();
};

#endif