#include<stdio.h>
void create(int n,int m,int a[50][50]);
void print(int n,int m,int a[50][50]);
int main(){
	int a[50][50];
	int n,m;
	printf("nhap so hang: ");
	scanf("%d",&n);
	printf("\nnhap so cot: ");
	scanf("%d",&m);
	create(n,m,a);
	print(n,m,a);
	return 0;
}
void create(int n,int m,int a[50][50]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("\nnhap gia tri a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void print(int n,int m,int a[50][50]){
	printf("ma tran:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
