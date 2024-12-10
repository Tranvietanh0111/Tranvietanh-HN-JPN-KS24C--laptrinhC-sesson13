#include<stdio.h>
int searchUCLN(int a,int b);
int main(){
	int a,b;
	printf("nhap so thu 1: ");
	scanf("%d",&a);
	printf("nhap so thu 2: ");
	scanf("%d",&b);
	int ucln=searchUCLN(a,b);
	printf("UCLN cua %d va %d la %d: ",a,b,ucln);
}
int searchUCLN(int a,int b){
	while(b != 0){
		int r =a%b;
		a=b;
	    b=r;
	}
	return a;
}

