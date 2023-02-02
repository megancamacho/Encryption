#include<iostream>
#include<sstream>
#include <string>
#include <iomanip>
using namespace std;

string encryption(string word, int n) // word : original word , n :  number of shifts
{
  // takes the size of the word and the initial value
    string encrypted;
    for (int i = 0; i < word.size(); i++) 
    {
    encrypted.push_back(word.at(i)); // pushes back the character at the current index
    
    if (word[i] >= 97 && word[i] <= 122) 
    {
        
        encrypted[i] = encrypted[i] + n;
        if (encrypted[i] > 'z') 
        {
        encrypted[i] -= 26;  // if the character is greater than z, subtract 26
        }
        }
      
    }
  
    return encrypted;
}
  

int main() 
{

    int shift; // how many times the letter will move
    cout << "What is the key : ";
    cin >> shift; // reads user input
    getchar(); // sends back characters that were typed in after getline()
    string newEncryption;
    cout << "Enter words to encrypt : ";
    getline(cin, newEncryption); // reads the phrase into the parameter
    stringstream ss(newEncryption);
 
  
   
  string word;
    cout<<endl<<setw(20)<<left<<"Original Word"; // position of word
        cout<<setw(20)<<left<<"Encrypted Word"<<endl;
        cout<<"-------------------------------------\n";
    while (ss>>word) 
    {
        cout<<setw(20)<<left<<word; // prints the original 
        cout<<setw(20)<<left<<encryption(word,shift)<<endl; // prints the ecrypted 
    }
        cout<<"-------------------------------------\n";

return 0;
  
}
