//
// Created by kumar on 9/6/2020.
//

#include "vec3.h"

// class member functions

template<class T>
Vec3<T>::Vec3() : x(T(0)), y(T(0)), z(T(0)) {};

template<class T>
Vec3<T>::Vec3(const T &xx) : x(xx), y(xx), z(xx) {};

template<class T>
Vec3<T>::Vec3(T xx, T yy, T zz) : x(xx), y(yy), z(zz) {};

template<class T>
T Vec3<T>::length() {
    return sqrt(x*x + y*y + z*z);
}

template<class T>
Vec3<T>& Vec3<T>::normalize() {
    T len = length();
    if (len>0){
        T invLen = 1/len;
        x *= invLen, y *= invLen, z *= invLen;
    }
    return *this;
}

// utility functions
template<typename T>
T length(const Vec3<T> &v){
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

template<typename T>
void normalize(Vec3<T> &v){
    T len2 = length(v);
    if (len2>0){
        T invlen = 1/len2;
        v.x *= invlen, v.y*= invlen, v.z *= invlen;
    }
}

