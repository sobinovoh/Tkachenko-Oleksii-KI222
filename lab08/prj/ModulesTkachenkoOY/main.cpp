#include <cmath>
#define PI 3.14

float s_calculation(float x, float y, float z){
    float s = round(pow( 2*z+1 , x) * 100)/100 - round(sqrt(abs(y - z/2))*100)/100 + z + PI;
    return s;
}
