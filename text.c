#include<stdio.h>
#include<string.h>

void almostEqual(char tempWord[],char wordToFind[] ){


int flag=0;
char* t1=wordToFind;
char* t2=tempWord;
//if(*t2==' ') return;
//printf("***%c***\n",*t2);
while (*t2!='\0' && *t2!='\n' && *t2!='\r'){
   
    if(*t1!=*t2){
        flag++;
        t2++;
    }
    else{
       t1++;
        t2++;
    }
    if(flag>1){
        break;
    } 
    if(*t1=='\0'){
	t2++;
	if(*t2!='\0'){
		flag++;	
	}
    }

}
if (flag<2 && *t1=='\0'){
printf("%s\n",tempWord);


    // char answer=tempWord[0];
    // index2=0;
    // while(tempWord[index2]!='\0'){
    //     printf("%s",te)

    }
    
}
void printIfHave(char line[] , char cat[]){
	int i=0;
	int j=0;

	for(j=0 ; j< strlen(line)-1; j++){
		if(cat[i] == line[j]){
			i++;
		}

		else{
			i=0;
		}

		if (i == strlen(cat)) {
			printf("%s" , line);
			break;
		}
	}
}



