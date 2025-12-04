#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <set>

#include "zbiorPunktow3D.h"
#include "punkt3D.h"

using namespace std;

zbiorPunktow3D::zbiorPunktow3D() {
	set<punkt3D> s = {};
}

void zbiorPunktow3D::dodajPunkt(punkt3D p) {
	s.insert(p);
}