#include<proCP.h>


int main(int argc, char ** argv)
{
	int proNo;
	int blocksize;
	if(argv[3]==0)
		proNo=3;
	else 
		proNo=atoi(argv[3]);

		check_pram(argc,argv[1],proNo);
		blocksize=block_cur(argv[1],proNo);
		process_create(argv[1],argv[2],proNo,blocksize);
		return 0;
}
