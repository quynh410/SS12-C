#include<stdio.h>
	int Multiplication(int a, int b){
		return a*b;
	}
	int Multiplication1(int b, int c){
		return b*c;
	}
	int Multiplication2(int a, int c){
		return a*c;
	}
	int Divide(int a, int b){
		if(a%b == 0,a>b){
			return a/b;
		}
	}
	int Divide1(int b, int c){
		if(b%c == 0, b > c){
			return b/c;
		}
	}
	int Divide2(int a , int c){
		if(a%c == 0){
			return a/c;
		}
	}
int main(){
	int a, b, c;
	printf("Nhap lan luot 3 so a b c :\n");
	scanf("%d %d %d ", &a, &b ,&c);
	printf("Tich va thuong cua a va b : %d, %d\n");
	printf("%d * %d = %d\n", a, b, Multiplication(a,b));
	if(a%b==0){
	    printf("%d / %d = %d\n",a,b,Divide(a,b));
	} else if(a>b){
		printf("%d khong chia het cho %d\n",a,b);
	} else{
		printf("%d khong chia het cho %d\n",b,a);
	}
	printf("Tich va thuong cua b va c : %d, %d\n");
	printf("%d * %d = %d\n",b,c,Multiplication1(b,c));
	if(b%c==0){
	    printf("%d / %d = %d\n",b,c,Divide1(b,c));
	} else if(b>c){
		printf("%d khong chia het cho %d\n",b,c);
	} else{
		printf("%d khong chia het cho %d\n",c,b);
	}
	printf("Tich va thuong cua a va c : %d, %d\n");
	printf("%d * %d = %d\n",a,c,Multiplication2(a,c));
	if(a%c==0){
	    printf("%d / %d = %d\n",a,c,Divide2(a,c));
	} else if(a>c){
		printf("%d khong chia het cho %d\n",a,c);
	} else{
		printf("%d khong chia het cho %d\n",c,a);
	}
	
}