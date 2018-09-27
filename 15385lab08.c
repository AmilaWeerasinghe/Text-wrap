#include<stdio.h>
//#define MAXCHAR 1000
#include<string.h>
#include<stdlib.h>
int main(int argc,char **argv){
/*int size,i;
char para[500];

}
//printf("%s",sWord);
fclose(f);
}
//printf("%s",x);
return 0;*/
//int main(){
FILE *f;
char word[100];
int size,y=0,x=0,z=0,a=0;
//scanf("%d",&size);
size=atoi(argv[1]);
f=fopen(argv[2],"r");
while(fscanf(f, "%s",word) != EOF){
//fscanf(f,"%s",word);
z=strlen(word);
if(z>a){
a=z;
}
}
//printf("%d",a);
fclose(f);
if(size<a){
printf("Word length must be less than screen width");
}
else{
if(argc==3){
//size=atoi(argv[1]);
f=fopen(argv[2],"r");
while(fscanf(f, "%s",word) != EOF){
//fscanf(f,"%s",word);

x=strlen(word);
y=y+x;
if(y<=size){
printf("%s ",word);
y=y+1;
}
else{
printf("\n");
printf("%s ",word);
y=x+1;
}
if(fgetc(f)=='\n'){
            printf("\n");y=0;
                   }
}
 
}
else{
printf("Usage: ./prog <width> <input-file>");
}
}

return 0;
}

