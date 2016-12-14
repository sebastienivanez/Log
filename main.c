#include <errno.h>
#include <string.h>
#include "put_log.h"

void function_to_test()
{
	put_log("DEBUG:main:%s\n", strerror(errno));
}

int main()
{
	init_log("mylog.txt");
	function_to_test();
	put_log("DEBUG:yes:%s\n", strerror(errno));
	clean_log();
	return 0;
}
