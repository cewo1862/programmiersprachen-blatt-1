#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b){
	int i=0;
	if((a==0) || (b==0)){
	return i;
	}
	if(a==b){
		return a;
	}
	i=a%b;
	while(i>0){
		i=a%b;
		a=b;
		b=i;
	}
	return a;
}
int sumMultiples(){
	int s=0;
	for(int x=1;x<=1000;x++){
		if((x%3==0) || (x%5==0)){
			s=s+x;
		}
	}
	return s;
}
int checksum(int a){
	int n = 0;
	while (a > 0){
		n += a % 10;
		a /= 10;
	}
	return n;
}

double fract(double a){
	double x;
	double n;
	x= int(a);
	n=a-x;
	return n;
}

double oberflaeche(double r,double h){
	double g;
	double u;
	double s;
	double o;
	double pi=M_PI;
	g=pi*r*r;
	u=2*pi*r;
	s=u*h;
	o=2*g+s;
	return o;
}
double volumen(double r,double h){
	double g;
	double v;
	double pi=M_PI;
	g=pi*r*r;
	v=g*h;
	return v;
}
double mileToKilometer(double x){
	double y=0;
	y=1.60934*x;
	return y;
}
int binomial(int a,int b){
	int r=0;
	int s=1;
	int u=1;
	int g=1;
	int z=1;
	int n=1;
	int m=1;
	int v=1;
	while(z < (a+1)){
		s = s*z;
		z++;
	}
	while(n < (b+1)){
		g = g*n;
		n++;
	}
	while(m < ((a-b)+1)){
		v = v*m;
		m++;
	}
	r = s/(g*v);
	return r;
}
bool is_prime(int x){
	int i = 2;
	while(i < x){
		if(x % i ==0){
			return false;
		}
		i++;
	}
	return true;
}
TEST_CASE("describe_gcd","[gcd]")
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
REQUIRE(sumMultiples()==234168);
}

TEST_CASE("describe_fract","[fract]")
{
REQUIRE(fract(2.394)==Approx(0.394));
REQUIRE(fract(12.9374)==Approx(0.9374));
REQUIRE(fract(1.72)==Approx(0.72));
}

TEST_CASE("describe_oberflaeche","[oberflaeche]")
{
REQUIRE(oberflaeche(2.7,3.5)==Approx(105.18));
REQUIRE(oberflaeche(3,5)==Approx(150.7964473723));
REQUIRE(oberflaeche(1,2)==Approx(18.8495559215));
}

TEST_CASE("describe_volumen","[volumen]")
{
REQUIRE(volumen(2.7,3.5)==Approx(80.15773));
REQUIRE(volumen(3,5)==Approx(141.3716694155));
REQUIRE(volumen(1,2)==Approx(6.2831853072));
}

TEST_CASE("describe_binomial","[binomial]")
{
REQUIRE(binomial(5,3)==10);
REQUIRE(binomial(49,6)==13983816);
}

TEST_CASE("describe_is_prime","[is_prime]")
{
REQUIRE(is_prime(2)==true);
REQUIRE(is_prime(4)==false);
REQUIRE(is_prime(7)==true);
}

TEST_CASE("describe_mileToKilometer","[mileToKilometer]")
{
REQUIRE(mileToKilometer(1.0)==Approx(1.60934));
REQUIRE(mileToKilometer(20.0)==Approx(32.1869));
REQUIRE(mileToKilometer(50.0)==Approx(80.4672));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
