#include<bits/stdc++.h> 
#define ASCII_SIZE 256 
using namespace std; 
  
char maxchar(char* str) 
{ 
    int count[ASCII_SIZE] = {0}; 
  
     
    int len = strlen(str); 
    int max = 0;  
    char result;   
  
   
    for (int i = 0; i < len; i++) { 
        count[str[i]]++; 
        if (max < count[str[i]]) { 
            max = count[str[i]]; 
            result = str[i]; 
        } 
    } 
  
    return result; 
} 
  
 
int main() 
{ 
    char str[100];
    cin>>str;
    cout<<endl;
    cout << "Max occurring character is "<< maxchar(str); 
} 