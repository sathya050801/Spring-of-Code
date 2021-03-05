//Print the word with more than one occurrence from the given String

#include<iostream>    
#include <stdio.h>  
#include <string.h>
using namespace std;  
       
int main()  
{     
    char string[] = "big black bug bit a big black dog on his big black nose";  
    char words[100][100];  
    int i = 0, j = 0, k, length, count;  
        
    for(k=0; string[k]!=''; k++)
    {  
        if(string[k] != ' ' && string[k] != ''){  
            words[i][j++] = tolower(string[k]);  
        }  
        else{  
            words[i][j] = '';  
            i++;  
            j = 0;  
        }  
    }  
        
    length = i+1;  
        
    printf("Duplicate words in the given string:");  
    for(i = 0; i < length; i++)
    {  
        count = 1;  
        for(j = i+1; j < length; j++)
        {  
            if(strcmp(words[i], words[j]) == 0 && (strcmp(words[j],"0") != 0))
            {  
                count++;  
                strcpy(words[j],"0");  
            }   
        }  
        if(count > 1 )  
            printf("%s", words[i]);  
    }  
    return 0;  
}  
