#include<stdio.h>
struct Sertivor{
    char id[20];
    char N[20];
    unsigned int  W;
    unsigned int  hour;
    unsigned int  pay;
};
int salc(struct Sertivor *);  
void show(struct Sertivor *);  
int main(void){
    int num;
    int i;
    struct Sertivor sertivor[4];
    printf("有幾個工讀生?:");
    scanf("%d", &num);
    for(i=0;i<num;++i){
        printf("這是第%d筆資料\n\n", i+1);
        printf("請輸入 id:");
        scanf("%s", sertivor[i].id);
        printf("請輸入 N:");
        scanf("%s", sertivor[i].N);
        printf("請輸入 W: ");
        scanf("%d", &sertivor[i].W);
        printf("請輸入 hour:");
        scanf("%d", &sertivor[i].hour);
        salc(&sertivor[i]);
    }
    for(i=0;i<num;++i){
    	show(&sertivor[i]);
	}
	return 0;
}
int salc(struct Sertivor *ser){ 
    (ser->pay)=(ser->W)*(ser->hour);
    return ser->pay;
}
void show(struct Sertivor *show){ 
    printf("\n\n%s的資料---------\n",show->N);
    printf("ID:%s\n",show->id);
    printf("姓名:%s\n",show->N);
    printf("時薪:%d\n",show->W);
    printf("時數:%d\n",show->hour);
    printf("薪水:%d\n",show->pay);
    printf("-------------\n");
}

