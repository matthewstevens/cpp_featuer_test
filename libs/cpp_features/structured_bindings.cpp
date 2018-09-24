#include <iostream>
#include <tuple>


namespace StructuredBindings {

void BindingAnArray()
{
	int a[2] = { 1,2 };
	auto [x, y] = a;
	std::cout << __FUNCTION__ << std::endl;
	std::cout << x << ", " << y << std::endl;
}

auto GetTuple()
{
	return std::make_tuple(1, 2, "abcd");
}
void BindingATupleType()
{
	auto [x, y, z] = GetTuple();
	std::cout << __FUNCTION__ << std::endl;
	std::cout << x << ", " << y << ", " << z << std::endl;
}

}