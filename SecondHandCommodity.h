﻿#ifndef SECONDHANDCOMMODITY_H
#define SECONDHANDCOMMODITY_H

#include "header.h"

class SecondHandCommodity: public NormalCommodity{
public:
	virtual ~SecondHandCommodity() =default;

	SecondHandCommodity(long id, std::string name,
						double p=0, int n=0, double dis=1.0, double dep=0);
	SecondHandCommodity(std::string name,
						double p=0, int n=0, double dis=1.0, double dep=0);

	double getDepreciation(void) const{
		return depreciation;
	}

	void setDepreciation(double dep){
		this->depreciation=dep;
		return ;
	}

	virtual double getNetPrice()const;
	virtual void output()const;
	virtual int getType()const;
	virtual std::string getInfo()const;

private:
	double depreciation;
};

#endif // SECONDHANDCOMMODITY_H
