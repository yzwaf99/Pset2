  
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

        else 
        {


        }

    }
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        
        if (text[i] == '.' ||  text[i] == '?' || text[i] == '!')
        {
            
            sentence++ ;

        }
        else 
        {


        }
    }
    
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        
        if (text[i] == ' ')
        {
            
            word++ ;


        }
        
        else
        {


        }    
    }
    

    

    //float L = (100 *  letter / word);
    
    //float S = (100 *  sentence /  word);
    
    
    float grade = round(0.0588 * (100 * (float) letter / (float) word) - 0.296 * (100 * (float) sentence / (float) word) - 15.8);
    
    //float grade = round(0.0588 * L - 0.296 * S - 15.8);
    
    
    //printf("%i letter(s)\n", letter);
    //printf("%i sentence(s)\n", sentence);
    //printf("%i word(s)\n", word);
    
    
    
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
