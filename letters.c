#include<stdio.h>
int x,y;
int main(){
void u(){
for(x=0; x<7; x++){
    for(y=0; y<4; y++){
        if(y==0|| y==3 ||(x==6&&y==1)||(x==6&&y==2) ){
            printf(" * ");
        }
        else
            printf("   ");
    }
    printf("\n");
}
}
void L(){
 for(x=0;x<7;x++){
    for(y=0; y<4; y++){
        if(y==0|| x==6){
            printf(" * ");
        }else
        printf("");
    }
    printf("\n");
 }
}
void T(){
for(x=0;x<7;x++){
    for(y=0; y<4; y++){
        if(x==0||y==1){
            printf(" * ");
        }else
        printf("   ");
    }
    printf("\n");
}
}
void G(){
for(x=0;x<7;x++){
    for(y=0; y<4; y++){
        if((x==0&&y==1)||(x==0&&y==2)||(x==1&&y==0)||(x==1&&y==3)||(x==2&&y==0)||(x==3&&y==0)||(x==3&&y==2)||(x==3&&y==3)||(x==4&&y==0)||(x==4&&y==3)||(x==5&&y==0)||(x==5&&y==3)||(x==6&&y==1)||(x==6&&y==2)){
            printf(" * ");
        }else
        printf("   ");
    }
    printf("\n");
}
}

void O(){
for(x=0;x<7;x++){
    for(y=0; y<4; y++){
        if((x==0&&y==1)||(x==0&&y==2)||(x==1&&y==0)||(x==1&&y==3)||(x==2&&y==0)||(x==2&&y==3)||(x==3&&y==0)||(x==3&&y==3)||(x==4&&y==0)||(x==4&&y==3)||(x==5&&y==0)||(x==5&&y==3)||(x==6&&y==1)||(x==6&&y==2)){
            printf(" * ");
        }else
        printf("   ");
    }
    printf("\n");
}
}
for(x=0;x<7;x++){
    for(y=0; y<4; y++){
        if((x==0&&y==1)||(x==0&&y==2)||(x==1&&y==0)||(x==2&&y==0)||(x==3&&y==0)||(x==4&&y==0)||(x==5&&y==0)||(x==6&&y==1)||(x==6&&y==2)){
            printf(" * ");
        }else
        printf("   ");
    }
    printf("\n");
}




return 0;
}
