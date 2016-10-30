#include<errno.h>
#include<limits.h>
#include "ourhdr.h"

#ifdef PATH_MAX
static int pathmax = PAATH_MAX;
#endif

#define PATH_MAX_GUESS 1024		/*If PATH_MAX is indeterminate */
								/*we are not guaranteed this is adequate */

char *
path_alloc(int *size)
			/*also return */
{
	
}

