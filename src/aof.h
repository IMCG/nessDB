#ifndef _AOF_H
#define _AOF_H
#include <stdint.h>
struct aof
{
	int idx_fd;
	int db_fd;
	int meta_fd;

	size_t cur_size;//the current index file's size
	size_t max_size;//index file max size
	uint64_t db_offset;
};


int	aof_init(struct aof *aof);
uint64_t aof_write(struct aof *aof,const char *k,const char *v);
int 	aof_delete(struct aof *aof,const char *k);
int 	aof_update(struct aof *aof,const char *k,const char *v);

#endif
