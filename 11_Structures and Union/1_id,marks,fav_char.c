#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int marks;
	char fav_char;
	char name[34];
};
//struct student Rishi ,ravi,shubham;
int main()
{
	struct student Rishi,ravi,shubham;
	Rishi.id = 1;
	ravi.id = 2;
	shubham.id = 3;
	Rishi.marks = 413;
	ravi.marks = 300;
	shubham.marks = 350;
	Rishi.fav_char= 'R';
	ravi.fav_char = 'x';
	shubham.fav_char = 'S';
//	Rishi.name = "Rishi singh";
//	ravi.name = "Ravi singh";
//	shubham.name = "Shubham singh";
	strcpy(Rishi.name,"My name is Rishi singh.");
	strcpy(shubham.name,"My name is shubham singh.");
	strcpy(ravi.name,"My name is ravi singh.");
	printf("Rishi got %d marks\n",Rishi.marks);
	printf("Rishi's name is:%s\n",Rishi.name);
	printf("shubham got %d marks\n",shubham.marks);
	printf("shubham's name is:%s\n",shubham.name);
	printf("ravi got %d marks\n",ravi.marks);
	printf("ravi's name is:%s\n",ravi.name);
	return 0;
}
