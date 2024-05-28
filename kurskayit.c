int main(){
int yas;
printf("\n kayit olmak icin yasinizi giriniz");
scanf("%d",&yas);

if(yas>=18){
printf("kursa kayit oldunuz tebrikler");
}

else if(yas<=0){
printf("lutfen yasinizi dogru girdikte sonra tekrar programi calistirin");
}

else{
    printf("yasiniz yetmedigi icin kayit olamadiniz");
}
}