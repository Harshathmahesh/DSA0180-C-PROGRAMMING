
#include <iostream>	 


#include <complex>	 
using namespace std;


int main()
{ 

std::complex<double> mycomplex(10.0, 2.0);


cout << "Real part: " << real(mycomplex) << endl;
cout << "Imaginary part: " << imag(mycomplex) << endl;
return 0;
}

