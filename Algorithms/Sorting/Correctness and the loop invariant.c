#include <stdio.h>


void InsertionSort(int n,int array[]){
int i,j,temp,k=0;
  for (i = 1; i < n; i++) {
      temp = array[i];
      j = i - 1;
      while ((temp < array[j]) && (j >= 0)) {
         array[j + 1] = array[j];
         j = j - 1;
      }
      array[j + 1] = temp;

   }

   for (i = 0; i < n; i++) 
      printf("%d ", array[i]);
}




int main() {
int s,i;
int array[1000];
scanf("%d",&s);

 for (i = 0; i < s; i++) 
      scanf("%d ", &array[i]);
   
InsertionSort(s,array);
}