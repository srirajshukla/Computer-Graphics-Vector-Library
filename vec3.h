//
// Created by kumar on 9/6/2020.
//

#ifndef CGTU_VEC3_H
#define CGTU_VEC3_H

#include <cmath>


template<class T>
class Vec3 {
public:
    Vec3();

    Vec3(const T &xx);

    Vec3(T xx, T yy, T zz);

    T x, y, z;

    T length();

    Vec3<T> &normalize();

};

template<typename T>
T length(const Vec3<T> &v);

template<typename T>
void normalize(Vec3<T> &v);

typedef Vec3<float> Vec3f;


#endif //CGTU_VEC3_H
