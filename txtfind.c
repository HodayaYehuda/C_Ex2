#include "text.c"
#include <stdio.h>
#include<string.h>
#define WORD 30
#define LINE 256

int main(){
    char keyWord[WORD]={'\0'};
    char tempCh;
    char* p=keyWord;
    scanf("%c",&tempCh);
    //int i=0;
    while(tempCh!=' ' && tempCh!='\n' && tempCh!='\0'){
        *p=tempCh;
        p++;
        scanf("%c",&tempCh);
    }

    char type;
    scanf("%c",&type);
    char tempLine[LINE];
    //int lineIndex;
    while(fgets(tempLine,LINE,stdin)!=NULL){
    if(tempLine[0]==' ') continue;


        switch (type)
        {
        case 'a': 
        	printIfHave(tempLine,keyWord);
             break;
        
        case 'b': ;

             char* lineIndex=tempLine;
             
             
            while(*(lineIndex)!='\0' && *(lineIndex)!='\n'){
                //int wordIndex=0;
                char word[WORD]={'\0'}; // arr represent word in line
                char* wordIndex=word;
                //char tempC=*lineIndex;// 
                while(*lineIndex!=' ' && *lineIndex!='\t' && *lineIndex!='\0' && *lineIndex!='\n'){//save word
                    *wordIndex=*lineIndex;
                    lineIndex++;
                    wordIndex++;
                    //tempC=*lineIndex;
                }
                //printf("befor equals check #%s*\n",word);
                almostEqual(word,keyWord);
                lineIndex++;
                //printf("after equal *%c*\n",*lineIndex);
            }
        break;
        }
    }
    return 1;
}
