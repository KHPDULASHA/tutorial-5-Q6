#include <stdio.h>

int main()
{
    char x; //x=executive’s job number
    int y; //y=level number
    int z; //z=basic salary
    int gross_salary;
    float income_tax;
    float net_salary;



    printf("Enter executive’s job number:");
    scanf("%s",&x);
    printf("\nEnter Basic Salary(z):");
    scanf("%d",&z);

    printf("\nEnter level number(y):");
    scanf("%d",&y);

    //Gross salary = Basic salary+ 0.25* Basic salary+ Conveyance allowance+ Entertainment allowance;
    //income tax= gross salary * tax rate/100;
    //net salary= Gross salary - income tax;


        if (y==1)
       {
         gross_salary= z + (0.25*z) + 1000 + 500;
         printf("\nGross Salary is:%d ",gross_salary);

         if (gross_salary<2000)
         {

          income_tax= gross_salary * 0;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }

         else if (2000<=gross_salary<4000)
         {

          income_tax= gross_salary * 0.03;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (4000<=gross_salary<6000)
         {

          income_tax = gross_salary * 0.05;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (gross_salary>=6000)
         {

          income_tax= gross_salary * 0.08;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }


       }



        if (y==2)
       {
         gross_salary= z + (0.25*z) + 1000 + 500;
         printf("\nGross Salary is:%d ",gross_salary);

         if (gross_salary<2000)
         {

          income_tax= gross_salary * 0;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }

         else if (2000<=gross_salary<4000)
         {

          income_tax= gross_salary * 0.03;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (4000<=gross_salary<6000)
         {

          income_tax = gross_salary * 0.05;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (gross_salary>=6000)
         {

          income_tax= gross_salary * 0.08;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }

       }



        if (y==3)
       {
         gross_salary= z + (0.25*z) + 1000 + 500;
         printf("\nGross Salary is:%d ",gross_salary);

         if (gross_salary<2000)
         {

          income_tax= gross_salary * 0;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }

         else if (2000<=gross_salary<4000)
         {

          income_tax= gross_salary * 0.03;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (4000<=gross_salary<6000)
         {

          income_tax = gross_salary * 0.05;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (gross_salary>=6000)
         {

          income_tax= gross_salary * 0.08;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
       }



        if (y==4)
       {
         gross_salary= z + (0.25*z) + 1000 + 500;
         printf("\nGross Salary is:%d ",gross_salary);

         if (gross_salary<2000)
         {

          income_tax= gross_salary * 0;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }

         else if (2000<=gross_salary<4000)
         {

          income_tax= gross_salary * 0.03;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (4000<=gross_salary<6000)
         {

          income_tax = gross_salary * 0.05;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }
         else if (gross_salary>=6000)
         {

          income_tax= gross_salary * 0.08;
          printf("\ntax:%f",income_tax);

          net_salary= gross_salary - income_tax;
          printf("\nnet_salary:%f", net_salary);
         }

       }
return ;

       }


