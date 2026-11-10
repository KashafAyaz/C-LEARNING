#include<stdio.h>
#include<string.h>
union data{
    float temp;
    float pressure;
    float humidity;

};
struct item{
    int type;
    union data data;

};
void printitem(struct item x){
    if(x.type==1){
        printf("temp:%.2f\n",x.data.temp);
    }
       else if(x.type==2){
        printf("pressure:%.2f\n",x.pressure.temp);
    }
        if(x.type==3){
        printf("humidity:%.2f\n",x.humidity.temp);
    }
    int main(void){
        
    }
    
}