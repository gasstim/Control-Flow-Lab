//Tim Gass
//CSC322 spring 2018
//Lab 1- due 2/12/18 at 11:59pm
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <time.h>


int main(void){
    char strin[20];
    char subs[2];
    char* cmd;
    int boolv = 1;
    char *p=getenv("USER");
    srand (time(NULL));
    while(boolv){
	printf("%s>$",p);
	fgets(strin,20,stdin);
	strtok(strin, "\n");
	if(strcmp((strin), "quit")==0){
            boolv = 0;
	}else if(strcmp((strin), "fime")==0){
	//fime game starts here
	    char cont[20] = "y";
	    int maxi = 0;
            printf("Welcome to the Find-Me Game\n");
	    int fimeq = 1;
	  while(strcmp((cont), "y")==0 && fimeq){
	    srand ( time(NULL) );
	    printf("What is the maximum amount of numbers to choose from?");
	//input taken as a string, compared to quit or converted to int. 
	    char max[100];
	    maxi = 0;
	    fgets(max,20,stdin);
	    strtok(max, "\n");
	    int tempbool =1;
	    while(tempbool){
		    //will only accept a single int larger than 2 for the max value.
			int count =0;
			if(strcmp((max), "quit")==0){
			    fimeq=0;
			    break;
			}else{
			    char* token = strtok(max, " ");
			    //atoi evaluates to 0 for strings, so if a string or any number less than 2 is entered, you will be prompted to re-enter a number.
			    int helper=atoi(token);
			    if(helper > 1){
				maxi=helper;
				count++;
			    }
			    while (token != NULL){
				token = strtok(NULL, " ");
				if(token != NULL){
		                    helper=atoi(token);
				    count = count-53;
				}
				count = count+100;
			    }
			}
			if(count==101){
			    //valid input, break out and proceed.
			    tempbool =0;
			    break;				
			}else{
			    //nonvalid input
			    printf("You must pick only one maximum int, greater than 1: ");
		    	    fgets(max,20,stdin);
		    	    strtok(max, "\n");			
			}
		    }
	    if(!fimeq){break;}
	    printf("The computer will chose one number between 1 and %d.\n", maxi);
	    int comp = 1 + (rand() % maxi);
	    printf("Now find me(e.g.,1):");
	    //input taken as a string, compared to quit or converted to int. 
	    char picks[100];
	    int pick = 0;
	    fgets(picks,20,stdin);
	    strtok(picks, "\n");
	    tempbool =1;
	    while(tempbool){
		    //will only accept a single int 1-max.
			int count =0;
			if(strcmp((picks), "quit")==0){
			    fimeq=0;
			    break;
			}else{
			    char* token = strtok(picks, " ");
			    //atoi evaluates to 0 for strings, so if a string or any number less than 2 is entered, you will be prompted to re-enter a number.
			    int helper=atoi(token);
			    if(helper > 0 && helper<maxi+1){
				pick=helper;
				count++;
			    }
			    while (token != NULL){
				token = strtok(NULL, " ");
				if(token != NULL){
		                    pick=atoi(token);
				    count = count-53;
				}
				count = count+100;
			    }
			}
			if(count==101){
			    //valid input, break out and proceed.
			    tempbool =0;
			    break;				
			}else{
			    //nonvalid input
			    printf("Please enter a valid int between 1 and %d: ",maxi); 
		    	    fgets(picks,20,stdin);
		    	    strtok(picks, "\n");			
			}
		    }
	    if(!fimeq){break;}
	    int count = 0;
	    printf("\n");
	    while(pick != comp){
		if(!fimeq){break;}
		count++;
	        printf("[%d trial] ", count);
		if(pick > comp){
		    printf("Less than %d\n", pick);
		    printf("Now find me(e.g.,1):");
		    fgets(picks,20,stdin);
		    strtok(picks, "\n");
		    tempbool =1;
	    while(tempbool){
		    //will only accept a single int 1-max.
			int count =0;
			if(strcmp((picks), "quit")==0){
			    fimeq=0;
			    break;
			}else{
			    char* token = strtok(picks, " ");
			    //atoi evaluates to 0 for strings, so if a string or any number less than 2 is entered, you will be prompted to re-enter a number.
			    int helper=atoi(token);
			    if(helper > 0 && helper<maxi+1){
				pick=helper;
				count++;
			    }
			    while (token != NULL){
				token = strtok(NULL, " ");
				if(token != NULL){
		                    pick=atoi(token);
				    count = count-53;
				}
				count = count+100;
			    }
			}
			if(count==101){
			    //valid input, break out and proceed.
			    tempbool =0;
			    break;				
			}else{
			    //nonvalid input
			    printf("Please enter a valid int between 1 and %d: ",maxi);
		    	    fgets(picks,20,stdin);
		    	    strtok(picks, "\n");			
			}
		    }
		    printf("\n");
		}else{
		    printf("Greater than %d\n", pick);
		    printf("Now find me(e.g.,1):");
		    fgets(picks,20,stdin);
		    strtok(picks, "\n");
		    tempbool =1;
	    while(tempbool){
		    //will only accept a single int 1-max.
			int count =0;
			if(strcmp((picks), "quit")==0){
			    fimeq=0;
			    break;
			}else{
			    char* token = strtok(picks, " ");
			    //atoi evaluates to 0 for strings, so if a string or any number less than 2 is entered, you will be prompted to re-enter a number.
			    int helper=atoi(token);
			    if(helper > 0 && helper<maxi+1){
				pick=helper;
				count++;
			    }
			    while (token != NULL){
				token = strtok(NULL, " ");
				if(token != NULL){
		                    pick=atoi(token);
				    count = count-53;
				}
				count = count+100;
			    }
			}
			if(count==101){
			    //valid input, break out and proceed.
			    tempbool =0;
			    break;				
			}else{
			    //nonvalid input
			    printf("Please enter a valid int between 1 and %d: ",maxi);
		    	    fgets(picks,20,stdin);
		    	    strtok(picks, "\n");			
			}
		    }
		    printf("\n");
		}
	    }
	    if(fimeq){
	    printf("[%d trial] Equal to %d\n", count+1, comp);
	    printf("You got it in %d trial(s)!\n",count+1);
	    printf("Do you want to play more(y/n)?");
	    fgets(cont,20,stdin);
	    strtok(cont, "\n");
	    printf("\n");
	    }
	  }printf("See you next time!\n");
	}else if(strcmp((strin), "nuba")==0){
            //number baseball game
	    char cont[20] = "y";
	    int compNums[3];
	    int yourNums[10];
	    char nums[20];
	    int nubaq=1;
	    while(strcmp((cont), "y")==0 && nubaq){
		    srand(time(NULL));
		    printf("Welcome to Number-Baseball Game\n");
		    printf("I set 3 Distinct number-balls 1-9.\n");
		    printf("Pitch your 3 number-balls (e.g. 1 2 3): ");
		    fgets(nums,20,stdin);
		    strtok(nums, "\n");
		    //checking to see if valid input
		    int tempbool =1;
		    while(tempbool){
		    //countr is keeping track of array index, count is being used for detecting if an input is only 3 valid ints or not.
			int count =0;
			int countr=0;
			if(strcmp((nums), "quit")==0){
			    nubaq=0;
			    break;
			}else{
			    char* token = strtok(nums, " ");
			    int helper=atoi(token);
			    if(helper > 0 && helper < 10){
				yourNums[0]=helper;
				count++;
				countr++;
			    }
			    while (token != NULL){
				token = strtok(NULL, " ");
				if(token != NULL){
		                    helper=atoi(token);
				    if(helper > 0 && helper < 10){
				        yourNums[countr]=helper;
					count = count-53;
					countr++;
				    }
				}
				count = count+100;
			    }
			}
			if(count==195){
			    //valid input, break out and proceed.
			    tempbool =0;
			    break;				
			}else{
			    //nonvalid input
			    printf("You must enter only 3 numbers 1-9.\n");
			    printf("Pitch your 3 number-balls (e.g. 1 2 3): ");
		    	    fgets(nums,20,stdin);
		    	    strtok(nums, "\n");			
			}
		    }
		    if(!nubaq){break;}
		    //setting computer's 3 random numbers
		    int boolv=1;
		    compNums[0] = 1 + (rand() % 9);
		    int count =1;
		    int temp;
		    while(boolv){
		    	temp = 1 + (rand() % 9);
			if(count==1){
			    if(temp != compNums[0]){
				compNums[1] = temp;
				count =2;
			    }
			}else if(count==2){
			    if(temp != compNums[0] && temp != compNums[1]){
				compNums[2] = temp;
				break;
			    }
			}
		    }
		    //print out comp's numbers to debug
		    //printf("Comp's randoms ints: %d %d %d\n", compNums[0], compNums[1], compNums[2]);
		    boolv=1;
		    count=1;
		    int balls=0;
		    int strikes=0;
		    while(count <9){
		   	balls=0;
			strikes=0;
			for(int i=0;i<3;i++){
			    for(int d=0;d<3;d++){
				if(yourNums[i]==compNums[d]){balls++;}
			    }
			    if(yourNums[i]==compNums[i]){strikes++;}	
			}
			//this will have counted strikes as balls as well, subtract.
			balls = (balls-strikes);
			if(strikes==3){
			    boolv=0; 
			    printf("[%d Innings] 3 Strikes! You win in %d innings.\n", count, count);
			    printf("Do you want to play more(y/n)?");
			    fgets(cont,20,stdin);
			    strtok(cont, "\n");
			    printf("\n");			    
			    break;
			}
			if(strikes ==0 && balls==0){printf("[%d Inning] Nothing\n", count);}
			if(strikes ==0 && balls>0){printf("[%d Inning] %d Balls\n", count,balls);}
			if(strikes >0 && balls==0){printf("[%d Inning] %d Strikes\n", count,strikes);}
			if(strikes >0 && balls>0){printf("[%d Inning] %d Strikes and %d Balls\n", count,strikes,balls);}
			printf("Pitch your 3 number-balls (e.g. 1 2 3): ");
		    	fgets(nums,20,stdin);
		    	strtok(nums, "\n");
			tempbool=1;
		    while(tempbool){
			//countr is keeping track of array index, count is being used for detecting if an input is only 3 valid ints or not.
			int count =0;
			int countr=0;
			if(strcmp((nums), "quit")==0){
			    nubaq=0;
			    break;
			}else{
			    char* token = strtok(nums, " ");
			    int helper=atoi(token);
			    if(helper > 0 && helper < 10){
				yourNums[0]=helper;
				count++;
				countr++;
			    }
			    while (token != NULL){
				token = strtok(NULL, " ");
				if(token != NULL){
		                    helper=atoi(token);
				    if(helper > 0 && helper < 10){
				        yourNums[countr]=helper;
					count = count-53;
					countr++;
				    }
				}
				count = count+100;
			    }
			}
			if(count==195){
			    tempbool =0;
			    break;				
			}else{
			    printf("You must enter only 3 numbers 1-9.\n");
			    printf("Pitch your 3 number-balls (e.g. 1 2 3): ");
		    	    fgets(nums,20,stdin);
		    	    strtok(nums, "\n");			
			}
		    }if(!nubaq){break;} count++;
		    }
		    if(boolv && nubaq){printf("Sorry, you lost to the computer. Better luck next time.\n");
			printf("Do you want to play more(y/n)?");
			fgets(cont,20,stdin);
			strtok(cont, "\n");
			printf("\n");
		    }
	    }printf("See you next time!\n");
	}else{
	    printf("Incorrect Command\n");
	}
    }
    printf("See you next time!\n");
}
