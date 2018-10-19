/**

File: main
Description: Program will prompt User for a string and a character, count how many
             times the character appears in the string, and print the result.
Author: Jessica Priester
Email: jessicp0249@student.vvc.edu
Date created: 10/18/2018

*/

#include<iostream>
#include<string>
#include<cctype>

using namespace std;


string get_string(string prompt);
char get_char(string prompt);
int char_count(string s, char a);


int main()
{
    string s = get_string("Enter word or phrase to search:");    // Get string from User
    char a = get_char("Enter character to find:");// Get character from User
    
    cout << "There are " << char_count(s, a) << " " << a << "'s in " << s << "." << endl;  // Print result

    return 0;
}

string get_string(string prompt)
{
    /*
    Function will print a prompt, accept a string entered by the User, and return the string.
    @param prompt Prompt to print
    @return string entered by User
    */

    string s;

    cout << prompt << endl;
    getline(cin, s);

    return s;
}

char get_char(string prompt)
{
    /*
    Function will print a prompt, accept a character entered by the User, and return the character.
    @param prompt Prompt to print
    @return Character entered by User
    */

    char a;

    cout << prompt << endl;
    cin >> a;

    return a;
}

int char_count(string s, char a)
{
    /*
    Function will count the number of times a given character appears in a given string and return the result.
    @param s String to search
    @param a Character to find and count
    @return Number of times character appears in string
    */

    int count = 0;  // Number of time character appears

    for(int i = 0; i < s.length(); i++) // As long as there are characters left to count in string...
    {
       // Check whether lowercase version of current character matches lowercase version of char a
       if( tolower(s.at(i)) == tolower(a) ) count++;   // Increase the count
    }

    return count;
}
