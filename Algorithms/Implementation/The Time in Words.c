#include <stdio.h>
#include <string.h>
int main(){
int h,m;

char array[30][15];

strcpy(array[0],"zero");
strcpy(array[1],"one");
strcpy(array[2],"two");
strcpy(array[3],"three");
strcpy(array[4],"four");
strcpy(array[5],"five");
strcpy(array[6],"six");
strcpy(array[7],"seven");
strcpy(array[8],"eight");
strcpy(array[9],"nine");
strcpy(array[10],"ten");
strcpy(array[11],"eleven");
strcpy(array[12],"twelve");
strcpy(array[13],"thirteen");
strcpy(array[14],"fourteen");
strcpy(array[15],"fifteen");
strcpy(array[16],"sixteen");
strcpy(array[17],"seventeen");
strcpy(array[18],"eighteen");
strcpy(array[19],"nineteen");
strcpy(array[20],"twenty");
strcpy(array[21],"twenty one");
strcpy(array[22],"twenty two");
strcpy(array[23],"twenty three");
strcpy(array[24],"twenty four");
strcpy(array[25],"twenty five");
strcpy(array[26],"twenty six");
strcpy(array[27],"twenty seven");
strcpy(array[28],"twenty eight");
strcpy(array[29],"twenty nine");

scanf("%d\n%d",&h,&m);

if(m==0)
printf("%s o' clock",array[h]);

if(m>0&&m<30&&m!=15)
printf("%s minutes past %s",array[m],array[h]);

if(m==15)
printf("quarter past %s",array[h]);

if(m==30)
printf("half past %s",array[h]);

if(m==45&&h<12)
printf("quarter to %s",array[h+1]);

if(m>30&&m<60&&m!=45&&h<12)
printf("%s minutes to %s",array[60-m],array[h+1]);

if(m==45&&h==12)
printf("quarter to %s",array[1]);

if(m>30&&m<60&&m!=45&&h==12)
printf("%s minutes to %s",array[60-m],array[1]);
}

