#include <af/array.h>
#include <Array.hpp>

namespace opencl
{
    template<typename T>
    Array<T> *reorder(const Array<T> &in, const af::dim4 &rdims);
}