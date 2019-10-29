#include <stdio.h>
int main() {
  int x[3] = {5, 2, 1}, i,j;
    for(j=0;j<3;j++){
    	for(i=j;i<2;i++) {
      		if( x[j] > x[i+1]) {
  	    		int temp = x[j];
  	    		x[j] = x[i+1];
  	    		x[i+1] = temp;
     		}
    	}	
	}	
    printf(" %d, %d, %d", x[0], x[1], x[2]);
	return 0;
}
