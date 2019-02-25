/*************************************************************************
* Program:                                                                 
*    Assignment 30, Array Syntax                                           
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program will prompt and get 10 grades from the user, then        
*    display the average.                                                  
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was fixing my spelling errors.              
*************************************************************************/

#include <iostream>
using namespace std;

/*************************************************************************
 * getGrades prompts the user to fill grades[], gets and fills grades.     
 ************************************************************************/
void getGrades(int grades[])
{
   for (int i = 1; i <= 10; i++)
   {
      cout << "Grade " << i << ": ";
      cin >> grades[i - 1];
   }
   return;
}

/*************************************************************************
 * averageGrades adds all the values in grades and returns that / by 10.   
 ************************************************************************/
int averageGrades(int grades[])
{
   int sum = 0;
   int num = 0;
   for (int i = 0; i < 10; i++)
   {
      if (grades[i] != -1)
      {
         sum += grades[i];
         num++;
      }
   }

   if (num == 0)
   {
      return 0;
   }
   else
   {
      return (sum / num);
   }
}

/*************************************************************************
 * display will display the average.                                       
 ************************************************************************/
void display(int average)
{
   cout << "Average Grade: ";
   if (average == 0)
   {
      cout << "---";
   }
   else
   {
      cout << average;
   }
   cout << "%\n";
}

/*************************************************************************
 * main initializes the array of grades, calls get grades to fill it,      
 * then display displays the average using averageGrades.                  
 ************************************************************************/
int main()
{
   int grades[10];

   getGrades(grades);
   display(averageGrades(grades));

   return 0;
}