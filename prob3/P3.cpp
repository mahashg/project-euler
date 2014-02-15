#include<cstdio>
#include<iostream>

#define max(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

int main(){
	long long no = 600851475143;
	long long factor = 2;
	long long largest = 2;
	while (no > factor) {
		if(no % factor == 0){
			largest = factor;
			while(no % factor == 0)
				no = no / factor;
		}
		++factor;
	}
	largest = max(no, largest);   // either the no or factor will be.
	printf("Largest prime factor: %lld\n", largest);
	return 0;
}
