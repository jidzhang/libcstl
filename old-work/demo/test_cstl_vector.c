#include <stdio.h>
#include <stdlib.h>
#include "cstl/cstl_def.h"
#include "cstl/citerator.h"
#include "cstl/cmap.h"
#include "cstl/cstring.h"
#include "cstl/cvector.h"
#include "cstl/clist.h"
#include <cstl/cstl_def.h>
#include <cstl/cstl_alloc.h>
#include <cstl/cstl_types.h>
#include <cstl/cstl_vector_iterator.h>
#include <cstl/cstl_vector_private.h>
#include <cstl/cstl_vector.h>

void test_vector() {
	vector_t * pvec = create_vector(int);
	vector_destroy(pvec);
}

int main()
{
	test_vector();
}
