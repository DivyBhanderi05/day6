#include<stdio.h>
main(){
	int x=3,y=4,z=5,f;
	f = x*x*x - y*y*y - z*z*z - 3*x*x*y + 3*x*y*y - 3*y*y*z - 3*y*z*z - 3*x*x*z + 3*x*z*z + 6*x*y*z;
	printf("Answer : %d",f);
}
