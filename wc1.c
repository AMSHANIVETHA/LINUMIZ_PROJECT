/*AMSHANIVETHA C*/
/* C program to implement WC functionality*/
#include <stdio.h>  
#include <stdlib.h> 
#define FILE_NAME 100 //Macro
int main()  
{   
    char ch;  
    FILE *file;  
    int word =0,line=0,character=0,byte=0;  
    char filename[FILE_NAME];
    printf("ENTER FILENAME:\n");
    //To get filename from user
    scanf("%s",filename);
    //To open the file
    file = fopen(filename,"r"); 
    //To extract character from file and store in the character ch
    while((ch=fgetc(file))!= EOF)
	{  
	 if(ch!='\n')//Increment byte
	 {
	  byte++;
         }
          if(ch ==' ' || ch == '\n')//Increment word
           {
	     word++;
	   }
          if (ch == '\n')//Increment line 
           {
            line = line + 1;
	   }
	   if(ch!=' '&&ch!='.'&&ch!='\n')//Increment character
           {
      	     character++;
           }
        } 
          //Close the file
          fclose(file);   
          printf("Words: %d\tLines: %d\tCharacters: %d\t   Bytes: %d",word,line,character,byte);     
          return 0;  
}
