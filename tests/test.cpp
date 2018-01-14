#include <mylib.h>
#include <cassert>

bool test(int x, int y, int expected)
{
	auto result = add(x, y);
	return (result == expected);
}

int main()
{
	assert(test(1, 1, 2));
	return 0;
}
