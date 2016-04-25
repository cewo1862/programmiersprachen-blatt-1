#include <iostream>
#include <string>
#include <catch.hpp>
#define CATCH_CONFIG_RUNNER
double x=1;
double y=1;
double mileToKilometer(double x){
y=x*1.60934;
return y;
}

int main(int argc, char* argv[]){
std :: cout << "Meilen eingeben:"
<< std :: endl ;
std :: cin >> x ;
mileToKilometer(x);
std :: cout << "Kilometer:" << y << std :: endl ;
}

