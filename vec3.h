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
    T dot (const Vec3<T> &v);
};

template<typename T>
T length(const Vec3<T> &v);

template<typename T>
void normalize(Vec3<T> &v);

template<typename T>
T dot(const Vec3<T> &a, const Vec3<T> &b){
    return a.x * b.x + a.y * b.y + a.z * b.z;
}


typedef Vec3<float> Vec3f;


#endif //CGTU_VEC3_H
