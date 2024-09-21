#include <stdio.h>

int main()
{
  /*char ch;
  scanf("%c", &ch);
  printf("Welcome to ultimate code of 'C'");
  */

  // Summation
  /* int a,b,c;
    printf("Enter the no. a:-\n");
    scanf("%d", &a);

    printf("Enter the no. b:-\n");
    scanf("%d", &b);

    printf("Enter the no. c:-\n");
    scanf("%d", &c);

    printf("Sum of a,b & c:- %d", a+b+c);
 */
  // Area of Square
  /*int side;
  printf("Enter the side:-\n");
  scanf("%d", &side);
  printf("And your area of square is:- %d", side*side);*/

  // Area of Circle
  /* float radius;
   printf("Enter the radius of circle:-\n");
   scanf("%f", &radius);
   printf("Area of Circle is:-%f", 3.14*radius*radius);*/

  // Area of Triangle
  /* float base,height;
   printf("Enter the base:-\n");
   scanf("%f", &base);
   printf("Enter the height:-\n");
   scanf("%f", &height);

   printf("Area of triangle is:- %f", 0.5*base*height);*/

  // Area of Cube
  /*int side;
  printf("Enter the value of a Side:-\n");
  scanf("%d", &side);
  printf("Area of Cube is:-%d", 6*side*side);*/

  // Simple interest Formula
  /*float P,R,T;
  printf("Enter the value of P:-\n");
  scanf("%f", &P);
  printf("Enter the value of R:-\n");
  scanf("%f", &R);
  printf("Enter the value of T:-\n");
  scanf("%f", &T);

  printf("The S.I is:-%f",P*R*T/100);
  */

  // Area of Trapezium
  /*float a,b,h;

  printf("Enter the value of a:-\n");
  scanf("%f", &a);
  printf("Enter the value of b:-\n");
  scanf("%f", &b);
  printf("Enter the value of h:-\n");
  scanf("%f", &h);

  printf("Area of Trapezium is:-%f",0.5*(a+b)*h);
  */

  // Area of Trapezium another example
  /* float a, b, h;
   float area;

   printf("Enter the value for two bases & height of the trapezium: \n");
   scanf("%f%f%f", &a, &b, &h);
   area = 0.5 * (a + b) * h ;
   printf("Area of the trapezium is: %.3f", area);
   */

  // Type declaration instructions
  /* int age = 36;
   int oldAge = age;
   int newAge = oldAge+9-7;
   printf("The new age is now:- %d", newAge);
   */

  // Average of three numbers
  /* float a,b,c;
   printf("Enter the no. a:- \n");
   scanf("%f", &a);
   printf("Enter the no. b:-\n");
   scanf("%f", &b);
   printf("Enter the no. c:-\n");
   scanf("%f", &c);

   printf("Your average of three numbers is:-%f",(a+b+c)/3);
   */

  // To find the smallest number between two numbers
  // via ternary operator
  /*  int a,b;
    printf("Enter tne no. a:-\n");
    scanf("%d", &a);
    printf("Enter the no. b:-\n");
    scanf("%d", &b);

    printf("The smallest no. is :-%d", b>a ? a:b);
     */

  // CONDITIONAL STATEMENTS
  //  if - else
  // find smallest number between two no.s
  /*  int a,b;
     printf("enter no. a:-\n");
     scanf("%d", &a);
     printf("enter no. b:-\n");
     scanf("%d", &b);

     if(a<b){
       printf("smallest no. is:-%d", a);
      }
     else{
       printf("smallest no. is:-%d", b);
     }
    */

  // Day prediction
  // Switch (Integer)
  /*  int day;
    printf("Enter the day in no.(1-7):-\n");
    scanf("%d", &day);
    switch(day){
      case 1: printf("Day is Monday \n");
              break;
      case 2: printf("Day is Tuesday \n");
              break;
      case 3: printf("Day is Wednesday \n");
              break;
      case 4: printf("Day is Thursday \n");
              break;
      case 5: printf("Day is Friday \n");
              break;
      case 6: printf("Day is Saturday \n");
              break;
      case 7: printf("Day is Sunday \n");
              break;
      default: printf("🚫 Invalid day no.");
      }
      */

  // switch (Character)
  /* char day;
   printf("Enter the day starting letter:-\n");
   scanf("%s", &day); //for multiple letters use %s (string)
   switch(day){       //for single letter use %c (character)
     case 'm': printf("Day is Monday \n");
             break;
     case 't': printf("Day is Tuesday \n");
             break;
     case 'w': printf("Day is Wednesday \n");
             break;
     case 'T': printf("Day is Thursday \n");
             break;
     case 'f': printf("Day is Friday \n");
             break;
     case 's': printf("Day is Saturday \n");
             break;
     case 'S': printf("Day is Sunday \n");
             break;
     default: printf("🚫 Invalid day letter");
      } */
  // Grade system
  /* int marks;
   printf("Enter the marks you obtained to check your grade:-\n");
   scanf("%d", &marks);
   if(marks >=0 && marks <20){
     printf("You are 'FAIL'☹️\n");
     }
     else if(marks>=20 && marks<30){
       printf("Your grade is 'D'\n");
     }
     else if(marks>=30 && marks<50){
       printf("Your grade is 'C'\n");
     }

      else if(marks>=50 && marks<70){
        printf("Your grade is 'B'\n");
      }
      else if(marks>=70 && marks<90){
        printf("Your grade is 'A'\n");
      }
      else if(marks>=90 && marks<=100){
        printf("Your grade is 'A+'\n");
      }
      else{
        printf("Please enter marks between 0-100\n");
      } */

  // checking whether you are adult , teenager or child!!
  /* int age;
   printf("Enter your age:-\n");
   scanf("%d", &age);

   if(age<13){
     printf("You are a Child\n");
     }
   else if(age>=13 && age<18){
     printf("You are a Teenager\n");
   }
   else{
     printf("You are Adult (now you are eligible to vote)\n");
   } */

  // Ternary Operator
  /*int number = 7;
  int luckyNumber = 7;
  printf("Enter the number(0-10)to check whether you are lucky or not:-\n");
  scanf("%d", &number);
  if(number>10){
    printf("Please enter no. between (0-10)\n");
  }
  else{
    (number==luckyNumber)? printf("You are Lucky😊"):printf("You are not Lucky☹️");
   } */

  // another example
  /*int age;
  printf("Enter your age:-\n");
  scanf("%d", &age);

  (age>=18)?printf("You are an Adult\n"):printf("You are not an Adult\n");
 */

  // Square of the no.
  /*int n;
  printf("Enter the number:-\n");
  scanf("%d", &n);
  printf("Square of the number is:-%d\n", n*n);
    */

  // LOOP Control Statement
  // for loop

  /* for(int i=1; i<=20; i++){    //i=i+1 or i++
     printf("%d\n", i);
   }

   for(int i=20; i>=0; i--){    //i=i-1 or i--
     printf("%d\n", i);
   }*/

  // while loop
  /*int i=1;
  while(i<=40){
    printf("%d\n",i);
    i++;
  }*/

  // Do while loop
  /*int i =1;
  do{
    printf("%d\n",i);
    i++;
  }while(i<=30);
  */
  // some examples
  /*for(int i=1;i<=10;i++){
    printf("Hello World\n");
  }*/

  /*int n;
  printf("Enter the no. till you want to print:-\n");
  scanf("%d", &n);
  printf("The numbers are:-\n");

  for(int i=1;i<=n;i++){
    printf("%d\n",i);
  }*/

  /*int n;
  printf("Enter the no. which you want to sum from one:-\n");
  scanf("%d",&n);
  printf("The total sum of the no. is:-\n");

  int sum =0;
  for(int i=1;i<=n;i++){
    sum =sum+i;
  }
  printf("%d\n",sum);
  */

  // sum between two natural no. (series sum)
  /*int n,j;
   printf("Enter the first no.:-\n");
   scanf("%d",&n);
   printf("Enter the second no.:-\n");
   scanf("%d",&j);
   printf("The total sum between two no. is:-\n");

   int sum =0;
   for(int i=n;i>=n && i<=j;i++){
     sum =sum+i;
   }
   printf("%d\n",sum);
   */

  // Table of any number 😉
  int n;
  printf("Enter the no. of which you want the table:-\n");
  scanf("%d", &n);
  printf("Your table of the given no. is:-\n");

  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", n * i);
  }

  //
  return 0;
}