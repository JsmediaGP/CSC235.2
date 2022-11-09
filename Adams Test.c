#include <stdio.h>
#include <string.h>

int main(){
	
	int T, i,j,count;
	
	char mystring[100];

	printf("WELCOME TO THE WALKING ADAM TEST\n");
	printf("--------------------------------\n");

//accepting the number of time the user want to test the program

	printf("Enter the number of times to test this program: ");
	scanf("%d", &T);
	
	if(T<1){
		printf("Please enter a positive number.\n");
		
	}
	else{
	
			for(i=1; i<=T; i++){
				
				//accepting the string of steps taken by Adams
				printf("Enter your string U for walk and D for fall: ");
				scanf("%s", mystring);
						
					//checking for the length of the string entered and assigning it to testcase to hold the number of the character
					int testcase = strlen(mystring);
						
					printf("You entered %d characters \n", testcase);
					printf("\n");
					printf("Entered characters are %s \n", mystring);
					printf("\n");
					count = 0;	
								//iteration to check inside the string entered and count for U's 
						for(j=0; j<testcase; j++){
							
							if(mystring[j] == 'U' || mystring[j] == 'u'){
										
								count+=1;
							}else {
									
								break;
							}
															
						}
								//after checking passing the whole number of U's and pass it to count variable
						printf("The output of U's before the first D is: %d\n", count);	
						printf("\n");
			}
	}
return 0;	
}