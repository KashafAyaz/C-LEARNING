int main() {
    int a;
    printf("Enter the first side : ");
    scanf("%d",&a);
    int b;
    printf("Enter the second side : ");
    scanf("%d",&b);
    int c;
    printf("Enter the third side : ");
    scanf("%d",&c);
    if((a+b>c) && (a+c>b) && (b+c>a)) {
    printf(" Valid triangle");
    }
    else{
    printf("Invalid triangle");   
    }
    return 0;
}