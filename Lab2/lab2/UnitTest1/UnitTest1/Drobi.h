#pragma once
#include <iostream>
#include <string>
#include <cmath>

#define Pi 3.14159265358979323

using namespace std;

class TComplex {
private:
	float deist;
	float mnim;
public:
	TComplex(float deist, float mnim) : deist(deist), mnim(mnim) {
		;
	}
	float getReal() const;
	float getMnim() const;
	float ugolG() const;
	float ugolR() const;
	TComplex Add(TComplex other) const;
	TComplex copy();
	TComplex minus(const TComplex other);
	TComplex cut(const TComplex other);
	TComplex squer() const;
	TComplex multiplie(const TComplex other) const;
	TComplex obratnoe() const;
	string strReal() const;
	string strMnim() const;
	string str() const;
	TComplex Step(int n) const;
	TComplex Squer(int n, int k) const;
	bool Equal(const TComplex a) const;
	bool more(const TComplex other)const;
};

