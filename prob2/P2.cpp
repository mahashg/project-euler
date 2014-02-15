#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int iter = 0;
	int a= 0, b = 1, temp;
	long sum = 0;	
	for(iter=0 ; iter<100 ; ++iter) {
		temp = a + b;
		a = b;
		b = temp;
		printf("#%d : %d\n", iter, temp);
		if(temp >= 4000000){
			printf("crossed limit\n");
			break;
		}
		if(temp % 2 == 0){
			sum += temp;
			printf("%ld\n", sum);
		}
	}
	return 0;

}
