#include <assert.h>
#include <stdlib.h>
#include <cstl/cstl_def.h>
#include <cstl/cstl_alloc.h>
#include <cstl/cstl_types.h>

void test__alloc_deallocate__invalid_allocated_memory(void ** state)
{
	_alloc_deallocate(NULL, NULL, 8, 1);
}

int main()
{
	test__alloc_deallocate__invalid_allocated_memory(NULL);
}


