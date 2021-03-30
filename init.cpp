#include "init.h"

void initSod(Mesh *& m, Field<Compressible> *& W) {
	int nx = 200;
	m = new Mesh(0.,1.,0.,3./double(nx),nx,1);
	W = new Field<Compressible>(*m); 
			
	for (int i=0; i<m->cell.size(); ++i) {
		Polygon const& T_x = m->cell[i];
		double rho, e, p;
		Vector 2D u;
			if(T_x.centroid().x >= 0.5){
			rho = 1.0;
			u = {0.0,0.0};
			p = 1.0;
		}
		else{
			rho = 0.125;
			u = {0.0,0.0};
			p = 0.1;
		}
			(*W)[i]].rho = rho;
			(*W)[i].rhoU = rho*u;
			(*W)[i].e = p / (kappa - 1.0) + 0.5 * rho * u{} * u{};
	}							
}
