#include<proCP.h>


int main(int argc,char** argv)
{
	int sfd,dfd;
	int blocksize=atoi(argv[3]);
	int pos=atoi(argv[4]);
	sfd=open(argv[1],O_RDONLY);
	dfd=open(argv[2],O_WRONLY|O_CREAT,0664);

	lseek(sfd,pos,SEEK_SET);
	lseek(dfd,pos,SEEK_SET);
	ssize_t readlen;
	char buffer[(int)blocksize];
	bzero(buffer,sizeof(buffer));
	readlen=read(sfd,buffer,sizeof(buffer));
	write(dfd,buffer,readlen);
	printf("copy child %d pos %d blocksize %d\n",getpid(),pos,blocksize);
	close(sfd);
	close(dfd);
	return 0;
}
