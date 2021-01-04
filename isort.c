#include <stdio.h>
#include "sort.c"
#define SIZE 50

int main() {
int arr[SIZE];
for(int i=0 ; i<SIZE ; i++){
scanf("%d",&arr[i]);
}

int* p = arr;
insertion_sort(p ,SIZE);

for(int i=0 ; i<SIZE ; i++){

printf("%d " , arr[i]);
}
printf("\n");

}
