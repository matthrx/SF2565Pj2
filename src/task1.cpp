#include <iostream>
#include <math.h>


double my_fact(double x){
    if (x <= 1){
        return 1;
    }
    return x*my_fact(x-1);
}

double myexp(double x, double tol= 1e-10){
    /*
    Infinite loop because convergence of computed_value variable is guaranteed.
    */
    double sum = 0.0;
    double i = 0.0;
    double computed_value  = 0.0;
    for(;;) {
        computed_value = pow(x, i)/my_fact(i);
        i ++;
        if(computed_value > tol) {
            sum += computed_value;
        }
        else break;
    };
    return sum;   
}

// int main(void){
//     double x = 2; 
//     std::cout << "Absolute error : " << abs(exp(x) - myexp(x, 1e-7)) << std::endl;
//     return 0;
// }