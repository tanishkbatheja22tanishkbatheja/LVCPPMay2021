/*

Given an integer n and a string represented as a character array, write a function 
that rotates the string by n characters in the clockwise direction.

Example :
	Input : n = 3, str[] = "codingblocks"
	Output: ckscodingblo
*/


int main() {
#include<bits/stdc++.h>
using namespace std;


int main() {

int d;
cin>>d;

char s[20]="codingblocks";
int n=strlen(s);
reverse(s,s+(n-d));

reverse(s+(n-d),s+n);

reverse(s,s+n);

cout<<s<<endl;

	return 0;
}

