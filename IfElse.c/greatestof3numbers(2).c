#inclue <stdio.h>
int main()
{
int a,b,c;
printf("Enter the first number : ");
scanf("d%",&a);
printf("Enter the second number : ");
scanf("d%",&b);
printf("Enter the third number : ");
scanf("d%",&c);
if(a>b){ // b is out of race
if(a>c)
printf("%d is greatest",a);
else // a<c 
printf("%d is greatest",c);
}
else{ // b>a
if(b>c)
printf("%d is greatest",b);  
else // c>b
printf("%d is greatest",c);
}
return 0;
}