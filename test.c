#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(){

	/*�����ļ�ָ��*/
    FILE *fr = NULL;

    /*��ֻ���ķ�ʽ���ļ�*/
    fr = fopen("./GTBL.dat", "rb");

    /*�жϴ��ļ��Ƿ�ɹ�*/
    if (fr == NULL)
    {
        if(strcmp(strerror(errno), "No such file or directory") == 0){
        	printf("��·�������ڣ�\n");
        }
        else{
        	perror("fopen");
        	return -1;
        }    
    }
    printf("...............\n");
    
    return 0;
} 
