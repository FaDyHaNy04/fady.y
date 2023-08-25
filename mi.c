#include<stdio.h>

int summax (int num){
int sum=0;
for (int i=0;i<=num;i++){
sum =sum+i;

}
return sum;
}

int main(){
int res,num;
printf("enter the number: ");
scanf("%d",&num);
res=summax(num);
printf("%d",res);

}
