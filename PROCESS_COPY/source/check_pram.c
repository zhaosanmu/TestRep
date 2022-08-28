#include<proCP.h>


int check_pram(int argc, const char * source, int proNo)
{
	if(argc<3)
	{
		perror("process copy error,Pram failed\n");
		exit(0);
	}
	if((access(source,F_OK))!=0){
		perror("process copy error,Not found source file\n");
		exit(0);
	
	}
	if(proNo<=0|| proNo>100){
		perror("process copy error,process number failed\n");
		exit(0);

	
	}
	return 0;
}
