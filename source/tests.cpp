#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b){
int i=0;
if(a==0 || b==0){
return i;
}
if(a==b){
return a;
}
i=a%b
a=b
b=i
return gcd(a,b)

int sumMultiples(int a){
if(a==1000){
x+1000;
return x;
}
if(a%3==0 || a%5==0){
x=x+a;
a=a+1;
return sumMultiples(a);
}

int checksum(int a){
int n = 0;
while (a > 0){
n += a % 10;
a /= 10;
}
return sum;
}

double fract(double a){
double n
x= int(a)
n=a-x
return n;
}

double oberflaeche(double r,double h){
double g
double u
double s
double o
double pi=M_PI
g=pi*r^2
u=2*pi*r
s=u*h
o=2*g+s
return o
}
double volumen(double r,double h){
double g;
double v;
double pi=M_PI;
g=pi*r^2;
v=g*h;
return v;
}
double mileToKilometer(double x){
x=1,60934*x;
return x;
}
TEST_CASE("describe_gcd","[gcd]");
{
REQUIRE(gcd(2,4) == 2);
REQUIRE(gcd(6,9) == 3);
REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("describe_checksum","[checksum]")
{
REQUIRE(checksum(142)==7);
REQUIRE(checksum(115940)==20);
REQUIRE(checksum(1111111)==7);
}
TEST_CASE("describe_sumMultiples","[sumMultiples]")
{
REQUIRE(sumMultiples(1)==234168);
}
TEST_CASE("describe_fract","[fract]")
{
REQUIRE(fract(2.394)==Approx(2.394));
REQUIRE(fract(12.9374)==Approx(12.9374));
REQUIRE(fract(1.72)==Approx(1.72));
}
TEST_CASE("describe_oberflaeche","[oberflaeche]")
{
REQUIRE(oberflaeche(2.7,3.5)==Approx(105));
REQUIRE(oberflaeche(3,5)==Approx(150));
REQUIRE(oberflaeche(1,2)==Approx(18));
}
TEST_CASE("describe_volumen","[volumen]")
{
REQUIRE(volumen(2.7,3.5)==Approx(80));
REQUIRE(volumen(3,5)==Approx(141));
REQUIRE(volumen(1,2)==Approx(6));
}
TEST_CASE("describe_mileToKilometer","[mileToKilometer]"){
REQUIRE(mileToKilometer(1)==Approx(1.60934));
REQUIRE(mileToKilometer(20)==Approx(32.1869));
REQUIRE(mileToKilometer(50)==Approx((80,4672));
}
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
