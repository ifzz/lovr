#include "vendor/vec/vec.h"

#ifndef LOVR_MATRIX_TYPES
#define LOVR_MATRIX_TYPES
typedef float* mat4;
typedef vec_t(mat4) vec_mat4_t;
#endif

mat4 mat4_init();
void mat4_deinit(mat4 matrix);
mat4 mat4_copy(mat4 source);
mat4 mat4_fromMat34(mat4 matrix, float (*source)[4]);
mat4 mat4_fromMat44(mat4 matrix, float (*source)[4]);
mat4 mat4_setIdentity(mat4 matrix);
mat4 mat4_setTranslation(mat4 matrix, float x, float y, float z);
mat4 mat4_setRotation(mat4 matrix, float angle, float ax, float ay, float az);
mat4 mat4_setScale(mat4 matrix, float x, float y, float z);
mat4 mat4_setProjection(mat4 matrix, float near, float far, float fov, float aspect);
void mat4_getRotation(mat4 matrix, float* w, float* x, float* y, float* z);
mat4 mat4_translate(mat4 matrix, float x, float y, float z);
mat4 mat4_rotate(mat4 matrix, float angle, float ax, float ay, float az);
mat4 mat4_scale(mat4 matrix, float x, float y, float z);
mat4 mat4_multiply(mat4 a, mat4 b);
void mat4_multiplyVector(mat4 m, float* v);
mat4 mat4_invert(mat4 m);
