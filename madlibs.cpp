//Eric Prez 
//9-12-18
//Purpose of program: First prompts the user one-by-one for each of the fill-in-the-blank prompts and store the input in variables that have the appropriate data type for that kind of information.

#include <iostream>
#include <string>
using namespace std;


//main function
int main()
{
//Declaration of variables
string LastName;
string FunnyProfession;
string sixdigitnumber;
string twodigitnumber;


//Get data from user
cout<<"Enter last name:\n";
cin>>LastName;

cout<<"Enter 6 digit number:\n";
cin>>sixdigitnumber;

cout<<"Enter 2 digit number:\n";
cin>>twodigitnumber;

cout<<"Enter funny profession name:\n";
cin>>FunnyProfession;



//Display complete story.

cout<< " I am representing Mr. " << LastName << " regarding his bank account numbered " << sixdigitnumber << ".";

cout<<" We would like to know why his bank account has " << twodigitnumber <<" $ "
" when he is a proffessional " << FunnyProfession << " making millions of dollars.";
  
  return 0;
  }
