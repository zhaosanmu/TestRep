#include<proCP.h>


int block_cur(const char* source ,int proNo)
{
	int blocksize;
	int fd;
	if((fd = open(source,O_RDONLY))==-1)
	{
		        perror("block_cur error,open source failed\n");
				exit(0);

	}
	int fsize;
	fsize=lseek(fd,0,SEEK_END);
	if(fsize%proNo ==0)
		return fsize/proNo;
	else
		return fsize / proNo+1;
		
}
