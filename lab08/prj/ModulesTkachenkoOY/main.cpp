#include <cmath>
#define PI 3.14

float s_calculation(float x, float y, float z){
    float s = floor(pow( 2*z+1 , x) * 100)/100 - sqrt(abs(y - z/2)) + z + PI;
    return s;
}
