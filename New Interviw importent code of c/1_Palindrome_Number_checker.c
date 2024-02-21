#include<stdio.h>
void isPalindrome(int num)
{
	int reversed =0; //int  a = num;  //on orginal number;
	while(num!=0)
	{
		reversed = reversed * 10+num %10;
		num=num/10;
	}
}
int main(){
	int num; 
	void isPalindrome(num);
	printf("Enter your number");
	scanf("%d",&num);
	isPalindrome(num);
	return 0;
}
