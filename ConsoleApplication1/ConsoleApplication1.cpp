#include <cstdio>
#include <iostream>

using namespace std;




int main()
{
        
        
        return 0;
}








/* Create a function that recieves two integers and returns the maximum of the two. 
//
// // int ReturnHigherNumber(int NumberOne, int NumberTwo)
// // {
// //     cout << "First Number :" << endl;
// //     cin >> NumberOne;
// //     cout << "Second Number :" << endl;
// //     cin >> NumberTwo;
// //       int LargerOfTwo;
// //     NumberOne < NumberTwo ? LargerOfTwo = NumberTwo : LargerOfTwo = NumberOne ;
// //             
// //     
// //     return LargerOfTwo;
// // }
//
//
*/

/* Write A Function that prints out odd numbers up to a limit 
//  
// void PrintOddNumbers(int Limit)
// {
//         for (int i = 0; i < Limit ; i++)
//         {
//                 if ( i % 2 != 0)
//                 {
//                         cout<< i << endl;
//                 }
//         }
// }
//     
*/

/* LINEAR SEARCH ALGORITHM -
        Create a function for finding a value in an integer array.
        If the target value exists, return its index , otherwise return -1. 


int LinearArraySearch(const int ArrayToSearch[], int SizeOfArray, int NumberToSearchFor)
{
       for(int i = 0 ; i < SizeOfArray; i++)
       {
               if (NumberToSearchFor == ArrayToSearch[i])
               {
                       return i;
               }
       }

        return -1;
}*/

/* Bubble Sort Algorithm
 *
 * Create a function that takes an array of integers and sorts them low to high.
 *
 *
*
void SortArray(int ArrayToSort[], int SizeOfArray)
{
        
        for(int pass = 0 ; pass < SizeOfArray; pass++)
        {
              for ( int i = 0; i < SizeOfArray ; i++)
                   {
                           if(ArrayToSort[i] < ArrayToSort[i-1])
                           {
                                   const int TempSwitchInteger = ArrayToSort[i];
                                   ArrayToSort[i] = ArrayToSort[i - 1];
                                   ArrayToSort[i - 1] = TempSwitchInteger;
                           }
                   }
        }
}
 * */

