#include<proCP.h>


void parent_wait(void)
{
	pid_t zpid;
	while((zpid =waitpid(-1,NULL,WNOHANG))!=-1){
		if(zpid>0)
			printf("Parent%d Wait zombie %d sucessly..\n",getpid(),zpid);
	}

}
