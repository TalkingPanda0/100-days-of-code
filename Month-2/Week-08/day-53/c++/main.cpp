/**
 * DAY-53 C++ version
 * 
 * Just run 'make' to compile and run all the tests
 */
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../../dependencies/c++/doctest.h" //https://github.com/onqtam/doctest

/**
 * Write a function that takes initial speed (v in m/s) and throw angle (a in degrees) and returns the maximum height and maximum range reached by javelin as a string.
 * 
 * @param v0 Initial speed (in m/s)
 * @param a Throw angle (a in degrees)
 * @return The maximum height and maximum range reached by javelin as a string.
 */  
std::string javelinThrow(double v0, double a) {
    const double ar = a * (M_PI / 180); //first, convert degrees to radians because is what trig functions use
    const double g = 9.81;
    
    /*
    DISCOVER THE PEAK HEIGHT (yMax):
    --------------------------------
    By βheightβ we mean the altitude or vertical position y above the starting point. 
    The highest point in any trajectory, called the apex, is reached when π£π¦=0. 
    Since we know the initial and final velocities, as well as the initial position, 
    use the following equation to find y: 
    
    π£π¦Β² = π£0π¦Β² β 2π(π¦ β π¦0)

    Because π¦0 and π£π¦ are both zero, the equation simplifies to:

    0 = π£0π¦Β² β 2π * π¦

    Solving for π¦ gives:

    π¦ = π£0π¦Β² / 2π

    Now we must find π£0π¦, the component of the initial velocity in the y direction. 
    It is given by π£0π¦ = π£0 * sinπ0, where π£0 is the initial velocity of "v" m/s and π0="ar" is the initial angle. Thus,

    π£0π¦ = π£0 * sinπ 

    and y is (where g = 9.81 m/sΒ²):

    π¦ = π£0π¦Β² / 2g 
    */
        
    double v0y = v0 * sin(ar);
    double y = pow(v0y, 2) / (2 * g); //<- peak height

    /**
     * DISCOVER THE HORIZONTAL DISPLACEMENT (xMax):
     * --------------------------------------------     
     * 
     * Based on the equation below, we can discover TIME π‘
     * π¦ = π¦0 + π£0π¦ * π‘ β (1/2) * π * π‘Β²
     * 
     * We know that at the end, π¦ = 0 and the initial height π¦0 = 0, so:      
     * π‘ = ((1/2) * π * π‘Β²) / π£0π¦
     * 
     * We must find π£0π¦, the component of the initial velocity in the y direction. 
     * π£0π¦ = π£0 * sinπ 
     * 
     * π‘ = ((1/2) * π * π‘Β²) / π£0π¦
     * π‘ = ((1/2) * π * π‘Β²) / π£0π¦
     * π£0π¦ = ((1/2) * π * π‘Β²) / π‘ 
     * π£0π¦ = (1/2) * π * π‘
     * π‘ = 2 * π£0π¦ / g         <- time discovered!
     * 
     * 
     * Now to the distance, by using:
     * π₯ = π₯0 + π£π₯ * π‘
     * 
     * We know that starting π₯0 = 0.
     * 
     * We must find π£π₯, the component of the initial velocity in the x direction. 
     * π£π₯ = π£0 * cosπ 
     * 
     */ 
    double t = 2 * v0y / g;
    double vx = v0 * cos(ar);
    double x = 0 + vx * t;

    std::ostringstream ssY;
    ssY << std::fixed << std::setprecision(0) << y;

    std::ostringstream ssX;
    ssX << std::fixed << std::setprecision(0) << x;

    return "Ymax=" + ssY.str() + "m, Xmax=" +  ssX.str() + "m";
}

/**
 * Tests
 */
TEST_CASE("Tests")
{
    CHECK(javelinThrow(36.7, 45) == "Ymax=34m, Xmax=137m");
    CHECK(javelinThrow(51.3, 20) == "Ymax=16m, Xmax=172m");
    CHECK(javelinThrow(100.1, 89) == "Ymax=511m, Xmax=36m");    
}