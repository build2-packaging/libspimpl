#include <sstream>
#include <stdexcept>

#include <spimpl/spimpl.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  spimpl::unique_impl_ptr<bool> t = spimpl::make_unique_impl<bool>(true);
  assert(t);

}
