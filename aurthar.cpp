#include <stdio.h>

void convert_integer_to_roman(int number);

int main(){
	int number;
	printf("\nenter number :");
	scanf("%d:",&number);
	printf("number is %d",number);
	
	convert_integer_to_roman(number);
	
	return 0;
}

void convert_integer_to_roman(int number){
	int thousands, hundreds,tens,ones;
	
	thousands = number/1000;
	printf("\nThe thousands is :%d",thousands);
	
	
	hundreds = (number-thousands*1000)/100;
	printf("\nThe hundreds is :%d",hundreds);
	
	
	tens = (number - thousands*1000 - hundreds*100)/10;
	printf("\nThe tenth is :%d",tens);
	
	ones = (number - thousands*1000 - hundreds*100-tens*10)/1;
	printf("\nThe ones is :%d",ones);
	
	
	if(thousands == 1 or thousands == 0){
	int hundreds_rep[9] = {1,2,3,4,5,6,7,8,9};
	char hundreds_sym[9][10] = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	int tens_rep[9] = {1,2,3,4,5,6,7,8,9};
	char tens_sym[9][10] = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	int ones_rep[9] = {1,2,3,4,5,6,7,8,9};
	char ones_sym[9][10] = {"i","ii","iii","iv","v","vi","vii","viii","xi"};	
	printf("\nThe roman numeral for %d is %s ",hundreds_rep[0]*100,hundreds_sym[0]);
	if(thousands == 1){
	printf("\nThe representation of thousands is M");
	printf("\nThe representation of hundreds is %s",hundreds_sym[hundreds-1]);
	printf("\nThe representation of tens is %s",tens_sym[tens-1]);
	printf("\nThe representation of ones is %s",ones_sym[ones-1]);
	printf("\nThe final answer is :M%s%s%s",hundreds_sym[hundreds-1],tens_sym[tens-1],ones_sym[ones-1]);
	}else{
		
	printf("\nThe representation of hundreds is %s",hundreds_sym[hundreds-1]);
	printf("\nThe representation of tens is %s",tens_sym[tens-1]);
	printf("\nThe representation of ones is %s",ones_sym[ones-1]);
	printf("\nThe final answer is :%s%s%s",hundreds_sym[hundreds-1],tens_sym[tens-1],ones_sym[ones-1]);
		
	}
	
	}
	else{
		printf("\nBeyond the scope of roman numerals");
	}
}
