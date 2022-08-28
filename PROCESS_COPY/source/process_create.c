#include<proCP.h>


int process_creat(const char* source,const char* dest,int proNo,int blocksize){
	pid_t pid;
	int i=0;
	for(i;i<proNo;i++)
	{
		pid=fork();
		if(pid ==0);
			break;

	}
	if(pid>0){
		parent_wait();
	}else if(pid ==0){
		int pos=0;
		char str_blocksize[10];
		char str_pos[10];
		bzero(str_blocksize,10);
		bzero(str_pos,10);
		pos=i*blocksize;
		sprintf(str_blocksize,"%d",blocksize);
		sprintf(str_pos,"%d",pos);
		excel("/home/zhaosen/1122/PROCESS_COPY/moudle/COPY","COPY",source,dest,str_blocksize,str_pos,str_pos,NULL);
	
	}else{
		perror("fork call failed");
		exit(0);
	}
	return 0;

}
