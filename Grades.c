#include<stdio.h>
int main(){
int marks;
printf("Enter marks:");
scanf("%d",&marks);
if(marks>=85 && marks<=100)
{
printf("Scored A grade");
}
else if(marks>=70 && marks<=84){
printf("Scored B grade");
}
else if(marks>=55 && marks<=69){
printf("Scored C grade");
}
else if(marks>=40 && marks<=54){
printf("Scored D grade");
}
else{
printf("Scored F grade");
}
}
