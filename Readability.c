  
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>


int main(void)
{
    
    string text = get_string("Text:  \n");

    int letter = 0;
    int word = 1;
    int sentence = 0;


    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            
            letter++ ;

        }


        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            
            letter++ ;

        }

    }
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        
        if (text[i] == '.' ||  text[i] == '?' || text[i] == '!')
        {
            
            sentence++ ;

        }
 
    }
    
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        
        if (text[i] == ' ')
        {
            
            word++ ;


        }
 
    }

    
    float grade = round(0.0588 * (100 * (float) letter / (float) word) - 0.296 * (100 * (float) sentence / (float) word) - 15.8);
    

    if (grade >= 16) 
    {
        
        printf("Grade 16+\n");
    }
    else if (grade <= 1)
    {
    
        printf("Before Grade 1\n");
    
    }
    else 
    {
        
        printf("Grade %0.0f\n", grade);
    }
   


}
