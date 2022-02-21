/*It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples
inputCopy
1987
outputCopy
2013
inputCopy
2013
outputCopy
2014*/

#include<iostream>
using namespace std; 
int main(){
    int n,a, b, c, d; 
    cin>> n ; 
    do
    {
        n++ ; a = n/1000 , b = (n/100)%10 , c = (n/10)%10, d = n%10 ;  
    } while (a==b||a==c||a==d||b==c||b==d||c==d);

    cout<< n <<endl;  
    return 0 ; 
}