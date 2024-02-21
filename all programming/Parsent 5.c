#include <stdio.h>
int main() {
    int Math, Science, Hindi, English, Chemistry,Sum;
    float Parsent;
    Math=33;
    Science=68;
    Hindi=75;
    English=75;
    Chemistry=70;
    Sum =Math+Science+Hindi+English+Chemistry;

    printf("Your all Subject (Math,Science, Hindi, English, Chemistry\n");
    printf("Your are all Marks is %d\n",Sum);
    printf(" Math, Science, Hindi, English, Chemistry\n");
    Parsent= Sum*100/500;
    printf("Your all subject Parsent is %d", Parsent);
    // printf("your Science Marks is %d\n", Science);
    // printf("your Hindi Marks is %d\n", Hindi);
    // printf("your English Marks is %d\n", English);
    // printf("your Chemistry Marks is %d\n", Chemistry);
    // Parsent= Math+Science+Hindi+English+Chemistry*100/500;
    // printf("%d%d%d%d%d",&Math,&Science,&Hindi,&English,&Chemistry);

    return 0;
}
