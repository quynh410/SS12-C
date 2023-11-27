#include<stdio.h>
int sum(int a, int b){
	if(a>b){
	    return a+b;
	} else{
		return b+a;
	}
}
int sum1(int b,int c){
	if(b>c){
		return b+c;
	} else{
		return c+b;
	}
}
int sum2(int a,int c){
	if(a>c){
		return a+c;
	} else{
		return c+a;
	}
	int diff(int a, int b){
	if(a>b){
	    return a-b;
	} else{
		return b-a;
	}
}
int diff1(int b,int c){
	if(b>c){
		return b-c;
	} else{
		return c-b;
	}
}
int diff2(int a,int c){
	if(a>c){
		return a-c;
	} else{
		return c-a;
	}
}
int main(){
	int a, b, c;
	printf("Nhap lan luot 3 so a b c :\n");
	scanf("%d %d %d ", &a, &b ,&c);
	int sumAB = a + b;
	int sumBC = b + c;
	int sumAC = a + c;
	int diffAB = a - b;
	int diffBC = b - c;
	int diffAC = a - c;
	
	printf("Tong va hieu cua a va b: %d , %d\n" , sumAB , diffAB);
	 printf("%d + %d = %d\n",a,b,sumAB);
    if(a>b){
        printf("%d - %d = %d\n",a,b,diffAB);
    } else{
    	printf("%d - %d = %d\n",b,a,diffAB);
	}
	printf("Tong va hieu cua b va c: %d, %d\n", sumBC, diffBC);
	 printf("%d + %d = %d\n",b,c,sumBC);
    if(b>c){
        printf("%d - %d = %d\n",b,c,diffBC);
    } else{
    	printf("%d - %d = %d\n",c,b,diffBC);
	}
	printf("Tong va hieu cua a va c:%d, %d\n", sumAC, diffAC);
	printf("%d + %d = %d\n",a,c,sumAC);
     if(a>c){
        printf("%d - %d = %d\n",a,c,diffAC);
    } else{
    	printf("%d - %d = %d\n",c,a,diffAC);
	}	
	

}

