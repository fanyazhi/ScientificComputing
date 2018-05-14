#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return exp(50*x) - 1;
}

double firstDerivative (double x) {
    return 50*exp(50*x);
}

double deltaX (double x) {
    return (-1.0/firstDerivative(x)) * f(x);
}

int main() {
    double tol = 1E-7;
    int k = 0;
    double x = 10;
    while (abs(deltaX(x)) >tol && abs(f(x) >tol) ){
        cout<<"x("<<k<<"):"<<x<<" || delta x("<<k<<"):"<<deltaX(x)<<" || f(x("<<k<<")):"<<f(x)<<endl;
        x += deltaX(x);
        k++;
    }
    return 0;
}