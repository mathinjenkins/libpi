#include<pi/pi.h>

float GetPi(int n){
    // Nilakantha Series
    float pi = 3;
    int sign = 1;
    int start = 2
    for (int i=1; i<n; i++){
        pi += sign * (4.0 / (start * (start + 1) * (start + 2)));
        sign *= -1;
        start += 2;
    }
    return pi;
}
