int main() {
    int x;
    printf("Enter the first number : ");
    scanf("%d",&x);
    int y;
    printf("Enter the second number : ");
    scanf("%d",&y);
    int z;
    printf("Enter the third number : ");
    scanf("%d",&z);
    int k;
    printf("Enter the third number : ");
    scanf("%d",&k);
    if(x>y && x>z && x>k) {
    printf("The greatest number is : %d",x);
    }
    else if(y>x && y>z && y>k) {
    printf("The greatest number is : %d",y);
    }
    else if(z>z && z>y && z>k) {
    printf("The greatest number is : %d",z);
    }
    else if(k>x && k>y && k>z) {
    printf("The greatest number is : %d",k);
    }

    return 0;
}