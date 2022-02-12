/*Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 10**3.

Output
Output the given word after capitalization.

Examples
inputCopy
ApPLe
outputCopy
ApPLe
inputCopy
konjac
outputCopy
Konjac

*/


#include<iostream>
using namespace std; 
int main(){
    string s1 ; 
    cin>> s1; 
    s1[0] = toupper(s1[0]); 
    cout<<s1<<endl; 

    return 0; 
}
