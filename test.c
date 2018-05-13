#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(){

	/*创建文件指针*/
    FILE *fr = NULL;

    /*以只读的方式打开文件*/
    fr = fopen("./GTBL.dat", "rb");

    /*判断打开文件是否成功*/
    if (fr == NULL)
    {
        if(strcmp(strerror(errno), "No such file or directory") == 0){
        	printf("此路径不存在！\n");
        }
        else{
        	perror("fopen");
        	return -1;
        }    
    }
    printf("...............\n");
    
    return 0;
} 
