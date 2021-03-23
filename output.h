#ifndef OUTPUT_H
#define OUTPUT_H

#include "Mesh.h"
#include "Field.h"
#include "Compressible.h"
#include <string>

void outputVTK(std::string filename, Mesh const& m, Field<double> const& u);
void outputVTK(std::string filename, Mesh const& m, Field<Compressible> const& u);

#endif //OUTPUT_H