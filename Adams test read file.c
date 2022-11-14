#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxlines 100
#define maxlen 100
int main(){
    //declaring char data to accepts each lines and set lengths to it
    char data[maxlines][maxlen];
    FILE*file;
    
    file = fopen("test.txt", "r");
    if(file==NULL){
        printf("Error opening");
        return 1;
    }
    //getting each lines and storing it inside data and increasing line by 1 untill it reach the last line
    int line =0;
    while(!feof(file) && !ferror(file))
        if (fgets(data[line], maxlen, file) != NULL)
        line++;
    fclose(file);
//done with the file now checking the number of lines inside the file
//checking strings for each line
    for(int i=1; i<line; i++){
        int j;
       //checking the length of stings on each lines 
       int ln = strlen(data[i]);
       
        //printing strings in each 
        printf("%s\n", data[i]);
        //iteration to check inside the string entered and count for U's 
        int count=0;
            for(j=0; j<ln; j++){
                if((data[i][j] == 'U' ) || (data[i][j] == 'u')){
                    count+=1;
                }else break;
        
            }
            printf("The output of U's before the first D is: %d\n", count);
    }
    return 0;

}