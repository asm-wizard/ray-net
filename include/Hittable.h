
#pragma once

#include "RayNet.h"
#include "XYZ.h"
#include "Ray.h"
#include "Hittable.h"

class HitTrace {
	Vector3 point;
	Vector3 normal;
	Vector3 color;
	bool frontFace;
};



class Hittable {

protected:
	virtual ~Hittable();
	virtual void hit(const Hittable object, const Ray& ray, const double tmin, const double tmax, HitTrace& trace);
};




