#include  <stdio.h>
main () {
   int subject;
    printf("discribe your all subject");
    printf("choose the subject no.1 if you pass the math subject");
    printf("choose the subject no.2 if you pass the science subject");
    printf("choose the subject no.3  both if you pass the both subject"); 
    scanf("%d",&subject);
    
    
    if(subject==1){
    printf("you are pass the math subject. so your gift is 15RS\n");
    }
    else if(subject==2){
    printf("you are pass the science subject. so your gift is 10RS\n");
    }
    else if(subject==3){
    printf("you are pass the both subject.so your gift is 40RS\n");
    }
   
    else
    {
    printf("you are fail.so better luck next time\n");
    }
    

    return 0;
    }

    