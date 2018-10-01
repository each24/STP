#include "stdafx.h"
#include "Drobi.h"

using namespace std;

float step(float a, int n) {
	float c = 1.0;
	for (int i = 0; i < n; n++) {
		c *= a;
	}
	return c;
}

float TComplex::getReal() const {
	return deist;
}

float TComplex::getMnim() const {
	return mnim;
}


TComplex TComplex::Add(TComplex other) const {
	TComplex a(((*this).deist + other.deist), (*this).mnim + other.mnim);
	return a;
}
TComplex TComplex::copy() {
	TComplex a = *this;
	return a;
}
TComplex TComplex::minus(const TComplex other) {
	TComplex a(((*this).deist - other.deist), (*this).mnim - other.mnim);
	return a;
}

TComplex TComplex::cut(const TComplex b) {
	TComplex a = *this;
	TComplex c((a.deist*b.deist + a.mnim*b.mnim) / (b.mnim*b.mnim + b.deist*b.deist), (b.deist*a.mnim - a.deist*b.mnim) / (b.deist*b.deist + b.mnim*b.mnim));
	return c;
}
TComplex TComplex::squer() const {
	TComplex a = *this;
	TComplex c(a.deist*a.deist - a.mnim*a.mnim, a.deist*a.deist + a.mnim*a.mnim);
	return c;
}
TComplex TComplex::multiplie(const TComplex b) const {
	TComplex a = *this;
	TComplex c(a.deist*b.deist - b.deist*b.mnim,a.deist*b.mnim + b.deist*a.mnim);
	return c;
}
TComplex TComplex::obratnoe()const {
	TComplex c = *this;
	TComplex a(c.deist / (c.deist*c.deist + c.mnim* c.mnim), c.mnim / (c.deist*c.deist + c.mnim*c.mnim));
	return a;
}
string TComplex::strReal() const {
	return to_string(this->getReal());
}
string TComplex::strMnim() const {
	return to_string(this->getMnim());
}
string TComplex::str() const {
	return this->strReal + " + i * " + this->strMnim();
}
float TComplex::ugolG() const {
	return 180 / Pi * (*this).ugolG();
}

TComplex TComplex::Step(int n) const {
	TComplex a = *this;
	float r = sqrtf(a.deist * a.deist + a.mnim * a.mnim);
	r = step(r, n);
	TComplex c(r*cosf(a.ugolR()*n), sinf(a.ugolR()*n));
	return c;
}

TComplex TComplex::Squer(int n, int k) const {
	if (k >= 0 && k < n) {
		TComplex a = *this;
		float r = sqrtf(a.deist * a.deist + a.mnim * a.mnim);
		r = powf(r, float(1 / n));
		TComplex c(r * cosf(a.ugolR() + 2 * Pi*k / n), sinf(a.ugolR() + 2 * k*Pi / n));
		return c;
	}
	else {
		throw logic_error("K за пределами допустимого!!!");
	}
}
bool TComplex::Equal(const TComplex a) const {
	TComplex b = *this;
	if (a.mnim == b.mnim && b.deist == a.deist)
		return true;
	else
		return false;
}
float TComplex::ugolR() const {
	TComplex a = *this;
	if (a.deist >= 0)
		if (a.deist == 0)
			if (a.mnim < 0)
				return Pi / 2;
			else
				if (a.mnim == 0)
					return 0;
				else
					return -Pi / 2;
		else 
			return float(atan(double(a.mnim / a.deist)));
	else 
		return float(atan(double(a.mnim / a.deist)) + Pi);
}
bool TComplex::more(const TComplex other) const {
	TComplex b = *this;
	TComplex a = b.minus(other);
	if (a.getReal() >= 0)
		return true;
	else
		return false;
}