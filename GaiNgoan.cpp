#include "GaiNgoan.h"

GaiNgoan::GaiNgoan() {};

GaiNgoan::GaiNgoan(const std::string& ho_ten, const int& tuoi, bool con_zin = true) : PhuNu(ho_ten, tuoi, con_zin) {};

std::string GaiNgoan::choi_nhac_cu(std::string nhac_cu)
{
    return "OOOOO...";
};

void GaiNgoan::noi_tro() {};