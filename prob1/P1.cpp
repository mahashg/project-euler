#include<cstdio>
#include<iostream>

using namespace std;

bool isCandidate(int no){
	return (no % 3 == 0 || no %5 == 0);
}
int main(){
	int sum=0;
	for(int i=0 ; i<1000 ; ++i){
		if(isCandidate(i)){
			sum += i;
		}
	}
	printf("sum is %d\n", sum);
	return 0;
}
