#include <stdio.h>
int main(){
	int n,i,t1=0,t2=1,t3;
	printf("enter the no of terms: ");
	scanf("%d", &n);
	for(i=1;i<=n;++i){
		printf("%d", t1);
		t3=t1+t2;
		t1=t2;
		t2=t3;
	}
	return 0;
