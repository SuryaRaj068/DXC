// Online C compiler to run C program online
#include <stdio.h>
void readCharFile(){
     FILE *fp;
    
    fp=fopen("file_name.txt","r");
    char readChar;
    while(1){
        readChar=fgetc(fp);
        if(readChar==EOF){
            break;
        }
        printf("%c",readChar);
    }
    fclose(fp);
}
void writeIntoFIle(){
    FILE *fp;
    fp=fopen("file_name.txt","w");
    fprintf(fp,"testing the gile\n");
    fputc(fp,'h');
    fclose(fp);
}
void readFileByScanf(){
    FILE *fp;
    char array[200];
    fp=fopen("file_nale.txt","r");
    while(fscanf(fp,"%s",array)!=EOF){
        printf("%s",array);
    }
    fclose(fp);
    
}
void writeCharToFile(){
    FILE *fp;
    fp=fopen("file_name","w");
    fputc('s',fp);
    fclose(fp);
}

void seek(){
    FILE *fp;
    
    fp=fopen("file_name.txt","w+");
    
    fseek(fp,6,SEEK_SET);
    fprintf(fp,"testing the file");
    fclose(fp);
}
int main() {
   

    return 0;
}