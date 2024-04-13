#ifndef GAI_HU_H
#define GAI_HU_H
#pragma once
#include "PhuNu.h"

class GaiHu : public PhuNu
{
    public:
        GaiHu();
        GaiHu(const std::string& ho_ten, const int& tuoi, bool con_zin);
        std::string choi_nhac_cu(std::string nhac_cu);
        void di_bar();
};

#include "GaiHu.cpp"

#endif