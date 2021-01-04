#include <stdio.h>
#include <stddef.h>
 
int shift_element(int* arr,int i){

int temp1=*(arr);
int temp2=*(arr+1);
for (size_t j = 0; j < i; j++){
       	temp2=*(arr+1);
        *(arr+1)=temp1;
        temp1=temp2;
        arr=arr+1;
}
return 1;
}

int insertion_sort(int* arr , int len){
int* index=arr+1;
int counter=0;
for (size_t i = 1; i < len; i++){
    if(*index<*(index-1)){
        counter=0;
        int* temp=index-1;
        while(temp>=arr){
            if(*(temp)<*index){
                int temp1=*index;
                shift_element((temp+1),counter);
                *(temp+1)=temp1;
                break;
            }
            else if(temp==arr){
                int temp1=*index;
                shift_element(temp,counter+1);
                *temp=temp1;
                break;
            }
            else{
                counter++;
                temp--;
            }
        }
    }
        index++;
}
return 1;
}



















































