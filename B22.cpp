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
    printf("���X�ӤuŪ��?:");
    scanf("%d", &num);
    for(i=0;i<num;++i){
        printf("�o�O��%d�����\n\n", i+1);
        printf("�п�J id:");
        scanf("%s", sertivor[i].id);
        printf("�п�J N:");
        scanf("%s", sertivor[i].N);
        printf("�п�J W: ");
        scanf("%d", &sertivor[i].W);
        printf("�п�J hour:");
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
    printf("\n\n%s�����---------\n",show->N);
    printf("ID:%s\n",show->id);
    printf("�m�W:%s\n",show->N);
    printf("���~:%d\n",show->W);
    printf("�ɼ�:%d\n",show->hour);
    printf("�~��:%d\n",show->pay);
    printf("-------------\n");
}

