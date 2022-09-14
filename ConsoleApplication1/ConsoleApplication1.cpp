#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
      

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

/* Implement the swap function for swapping two variables using pointers. 

void SwapIntegersViaPointers(int* first, int* second)
{
        int TempInteger = *first;
        *first = *second;
        *second = TempInteger;
        
}

*/

/* Given This array : int numbers[] = {10, 20, 30};
        1. Create a pointer that points to the last element in this array.
        2. Use a while loop to iterate over this array, and print the numbers in reverse order.

        // IN MAIN PROGRAM : 

int numbers[] = {10, 20, 30};
int* NumbersPtr = numbers+2;       // int* NumbersPtr = &numbers[size(numbers)-1]

while(*NumbersPtr > 0)                // while (NumbersPtr >= numbers)
{
        cout << *NumbersPtr << endl;
        NumbersPtr -= 1;                // NumbersPtr--
}

*/

/* Given someone's first and last name as a string, write code to extract their first and last names.
 *
 *      in main function :
 *      
*      string full_name = "Colin Telesphoros";
        cout << "Full name: " << full_name << endl;
        const auto index_of_space = full_name.find_first_of(' ');
        string FirstName = full_name.substr(0, index_of_space);
        string LastName = full_name.substr(index_of_space+1);
        cout << "First Name :" << FirstName << endl << "Last Name: " << LastName << endl;
 * 
 */

/* Define a structure for representing customers:
 
        ID Number
        Name
        Email
 
        1. Ask the user for these values, store them in a customer object, and
        print the result.

        2. Define a structure for representing an address.
 
         - Street, City, and Zipcode
 
        Nest the address structure within the customer structure
 
         Create and initialize a customer.
  
struct AddressOfCustomer
{
        string Street;
        string City;
        int ZipCode{};
};

struct Customer
{
        int ID_Number{} ;
        string Name;
        string Email;
        AddressOfCustomer Address;
};

// IN FUNCTION :
        
Customer FirstCustomer{0, "", "", {}};

cout << "ID Number: \n" ;
cin >> FirstCustomer.ID_Number;
cout << "Name: \n" ;
cin >> FirstCustomer.Name;
cout << "Email: \n" ;
cin >> FirstCustomer.Email;

cout << "\nID Number: " << FirstCustomer.ID_Number ;
cout << "\nName: " << FirstCustomer.Name ;
cout << "\nEmail: " << FirstCustomer.Email ;   
        
        return 0;
//  
*/

/* Define a structure for representing a point.
 *
 *  - X, Y
 *  
 *      Overload the equality (==) and stream insertion operators (<<)
 *      for points.
 *
*      
struct Point
{
        int x{};
        int y{};
};

bool operator==(const Point& first, const Point& second)
{
        return (first.x == second.x && first.y == second.y);
}

ostream& operator<<(ostream& stream, const Point& point)
{
        stream << "X: " <<  point.x << " Y: " << point.y ;    
        return stream;                         //  /// could have been on one line
}

 *      
 *      
 *
 * */
