//Copyright (c) 2012-2015 Christian Schwarz
//
//Permission is hereby granted, free of charge, to any person obtaining
//a copy of this software and associated documentation files (the
//"Software"), to deal in the Software without restriction, including
//without limitation the rights to use, copy, modify, merge, publish,
//distribute, sublicense, and/or sell copies of the Software, and to
//permit persons to whom the Software is furnished to do so, subject to
//the following conditions:
//
//The above copyright notice and this permission notice shall be
//included in all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
//LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
//WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#pragma once
#ifndef PYCAST_COMMON_MATRIX_MATRIXC_H
#define PYCAST_COMMON_MATRIX_MATRIXC_H

#include <Python.h>
#include <stddef.h>

namespace common {
	namespace matrix {
        class MatrixClass {
            public:
                MatrixClass(int columns, int rows);
                PyObject* set_value(int col, int row, float value);
                float get_value(int col, int row);
            private:
                MatrixClass();
                float* data;
                int width;
                int height;
        };
		namespace Matrix {
			PyObject* matrix_multiplication(PyObject* self, PyObject* matrix);
		}
	}
}

#endif /* PYCAST_COMMON_MATRIX_MATRIXC_H */
