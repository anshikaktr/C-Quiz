#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void dashboard();
// void saveProgress();
int countDown(int n);
void main(){
  char player_name[25], choice;
  printf("\e[1;1H\e[2J");
  printf("WELCOME TO THE QUIZ GAME. ");
  printf("pls enter your name ");
  fgets(player_name,25,stdin);
  // printf(": %s \n",player_name);
  // system("cls");

  printf("\e[1;1H\e[2J");
  printf("\t HI %s! \n",player_name); //????? WHY IS ! IN NEXT LINE  ???????
  printf("\t\t\t <QUIZ GAME> \n\t WELCOME... \n\t RULES OF GAME : \n\n");
  printf(" 1. QUIZ CONTAINS 20 QUESTIONS ABOUT C PROGRAMMING LANGUAGE \n");
  printf(" 2. EACH CORRECT ANSWER GETS YOU 5 POINTS \n");
  printf(" 3. EACH INCORRECT ANSWER DEDUCTS 1 POINT \n");
  printf(" 4. YOU CAN SKIP ANY QUESTION \n");
  printf(" 5. YOU CAN CHECK YOUR SCORE IN DASHBOARD \n\n");
  // printf(" \t WRITE Y TO CONTINUE: \n");

  printf(" \n\t CHOOSE:  \n");
  printf(" \t WRITE S TO START. \n");
  printf(" \t WRITE D TO DASHBOARD. \n");
  printf(" \t WRITE R TO RESTART. \n");
  printf(" \t WRITE X TO EXIT. \n");

  choice= toupper(getchar());
  // printf(":- %c ",choice);

  if (choice == 'S'){ //startgame
    goto startgame;
  }
  // if (choice == 'D'){ //Dashboard
  //   printf("\e[1;1H\e[2J");
  //   dashboard();
  // }
  // if (choice == 'R'){ //Restart
  //   printf("\e[1;1H\e[2J");
  //   ;
  // }
  // if (choice == 'X'){ //EXIT
  //   printf("\e[1;1H\e[2J");
  //   ;
  // }

  startgame:
    printf("\e[1;1H\e[2J");
    printf("GIVEN ARE MCQ TYPE QUESTIONS. \nEACH QUESTION HAS FOUR OPTIONS TO CHOOSE FROM: A.,B.,C.,D. \n\n\
    TYPE 'E' TO SKIP THE QUESTION. \n\tTYPE 'P' TO SAVE PROGRESS. \n\tTYPE 'H' TO USE HINT\
    (YOU CAN ONLY USE THE HINT THRICE.) ");
    printf("\n\nThe game starts in...");
    countDown(3);
    
    int correct=0, wrong=0, skipped=0;
    int i, run;
    char response, rerun;
    for (i=1; i<=20; i++){
      run=i;

      switch(run){  
        case 1:
          printf("Q1. Who developed the C programming language? \nA. Dennis Ritchie \nB. Bjarne Stroustrup \nC. James Gosling\
          \nD. Ken Thompson\n\n");
          response = toupper(getchar());
      
          if (response == 'A'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 2:
          printf("\e[1;1H\e[2J");
          printf("Q2. In which year was the C language developed? \nA. 1969 \nB. 1972 \nC. 1983\
          \nD. 1991\n\n");
          response = toupper(getchar());
      
          if (response == 'B'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 3:
          printf("\e[1;1H\e[2J");
          printf("Q3. Which statement correctly represents a valid if statement in C? \nA. if x > 0 \nB. if (x > 0) \nC. if {x > 0}\
          \nD. if x > 0 then\n\n");
          response = toupper(getchar());
      
          if (response == 'B'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 4:
          printf("\e[1;1H\e[2J");
          printf("Q4. Which looping statement in C is an entry-controlled loop? \nA. for \nB. while \nC. do-while\
          \nD. Both a) and b)\n\n");
          response = toupper(getchar());
      
          if (response == 'D'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }
        
        case 5:
          printf("\e[1;1H\e[2J");        
          printf("Q5. How do you declare an integer array of size 10 in C? \nA. int arr[] = 10; \nB. int arr[10]; \nC. int arr{10};\
          \nD. array int arr[10];\n\n");
          response = toupper(getchar());
      
          if (response == 'B'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 6:
          printf("\e[1;1H\e[2J");        
          printf("Q6. What is the index of the first element in an array in C? \nA. 1 \nB. -1 \nC. 0\
          \nD. Depends on compiler\n\n");
          response = toupper(getchar());
      
          if (response == 'C'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 7:
          printf("\e[1;1H\e[2J");        
          printf("Q7. Which library function is used to find the length of a string in C? \nA. strlen() \nB. strlength() \nC. stringlen()\
          \nD. length()\n\n");
          response = toupper(getchar());
      
          if (response == 'A'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 8:
          printf("\e[1;1H\e[2J");        
          printf("Q8. What will be the output of the following code? \nA. H \nB. e \nC. l\
          \nD. o\n\t\t");
          printf(" char str[] = \"Hello\";\n\
                  printf(\"%c%c\", str[1]);\n\n",37,99);
          response = toupper(getchar());
      
          if (response == 'B'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }
        
        case 9:
          printf("\e[1;1H\e[2J");        
          printf("Q9. What is the return type of the main() function in C? \nA. int \nB. void \nC. char\
          \nD. Depends on compiler\n\n");
          response = toupper(getchar());
      
          if (response == 'A'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 10:
          printf("\e[1;1H\e[2J");        
          printf("Q10. Which keyword is used to return a value from a function in C? \nA. output \nB. return \nC. end\
          \nD. yield\n\n");
          response = toupper(getchar());
      
          if (response == 'B'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 11:
          printf("\e[1;1H\e[2J");        
          printf("Q11. How do you define a structure in C? \nA. struct { int a; }; \nB. structure { int a; }; \nC. struct name { int a; };\
          \nD. class name { int a; };\n\n");
          response = toupper(getchar());
      
          if (response == 'C'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 12:
          printf("\e[1;1H\e[2J");        
          printf("What is the size of a structure that contains an int and a char (assuming int is 4 bytes, char is 1 byte)? \nA. 5 bytes \nB. 8 bytes\
           \nC. 7 bytes \nD. Depends on compiler\n\n");
          response = toupper(getchar());
      
          if (response == 'B'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 13:
          printf("\e[1;1H\e[2J");        
          printf("Q13. What does a pointer variable store? \nA. Address of another variable \nB. Value of another variable \nC. Data type of a variable\
          \nD. Index of an array\n\n");
          response = toupper(getchar());
      
          if (response == 'A'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 14:
          printf("\e[1;1H\e[2J");        
          printf("Q14. What is the correct syntax to declare a pointer to an integer? \nA. int *p; \nB. int p*; \nC. int p;\
          \nD. *int p;\n\n");
          response = toupper(getchar());
      
          if (response == 'A'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 15:
          printf("\e[1;1H\e[2J");        
          printf("Q15. Which of the following problems is best solved using recursion? \nA. Finding the sum of two numbers \
          \nB. Calculating factorial of a number \nC. Sorting an array\
          \nD. Printing a string\n\n");
          response = toupper(getchar());
      
          if (response == 'B'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 16:
          printf("\e[1;1H\e[2J");        
          printf("How many times does the function fun() run in the following code? \nA. 3 \nB. 2 \nC. 4\
          \nD. Infinite\n\t\t");
          printf(" void fun(int n) { \n\
                    if (n > 0) { \n\
                      printf(\"%d\", n); \n\
                      fun(n-1); \n\
                    } \n\
                  } \n\
                  fun(3);\n\n");
          response = toupper(getchar());
      
          if (response == 'A'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 17:
          printf("\e[1;1H\e[2J");        
          printf("Q17. Which mechanism is used when a function receives a copy of the variable's value? \nA. Call by reference \
          \nB. Call by pointer \nC.  Call by value\
          \nD. Call by address\n\n");
          response = toupper(getchar());
      
          if (response == 'C'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 18:
          printf("\e[1;1H\e[2J");        
          printf("Q18. Which of the following uses call by reference? \nA. void swap(int *a, int *b); \nB. void swap(int a, int b); \
          \nC. swap(a, b);\
          \nD. int main()\n\n");
          response = toupper(getchar());
      
          if (response == 'A'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 19:
          printf("\e[1;1H\e[2J");        
          printf("Q19. Which symbol is used to indicate a preprocessor directive in C? \nA. $ \nB. @ \nC. #\
          \nD. % \n\n");
          response = toupper(getchar());
      
          if (response == 'C'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }

        case 20:
          printf("\e[1;1H\e[2J");        
          printf("Q20. Which of the following is not a valid C keyword? \nA. sizeof \nB. struct \nC. typedef\
          \nD. class\n\n");
          response = toupper(getchar());
      
          if (response == 'D'){
              correct++;
              getchar();
              break;
          }
          else if (response == 'E'){
              skipped++;
              getchar();
              break;
          }
          // else if (response == 'H'){
          //     printf("HINT : \n");
          //     getchar();
          //     break;
          // }
          // else if (response == 'P'){
          //     saveProgress();
          //     getchar();
          //     break;
          // }
          else{
              wrong++;
              getchar();
              break;
          }        
      }
    }
}

int countDown(int n){
    int sec;
    for (sec=n; sec>=0; sec--){
        printf("%d ...\n",sec);
    }
    printf("\n\n");
    return 0;
}

void dashboard(){

}

// void saveProgress(){}