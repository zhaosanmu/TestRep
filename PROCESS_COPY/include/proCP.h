#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/wait.h>
int check_pram(int argc,const char * source ,int proNo);
int bloce_cur(const char *source,int proNo);
int process_create(const char* source ,const char* dest,int proNo,int blocksize);
void parent_wait(void);
