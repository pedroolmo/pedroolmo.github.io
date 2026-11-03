#include <stdio.h>
#include <stdlib.h>


float randfloat() {
	return (float)rand()/RAND_MAX;
}

float randf(float min, float max) {
	return min + randfloat()*(max-min);
}