#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

void inputData(double *,double *,double *,double *,double *);

double calculate(double, double, double, double, double);

void answer(double);

int main(void){
	double hole_diameter, edge_diameter, thickness, density, quantity, weight;
	inputData(&hole_diameter, &edge_diameter, &thickness, &density, &quantity);
	weight=calculate(hole_diameter, edge_diameter, thickness, density, quantity);
	answer(weight);
	return 0;
}

void inputData(double *hole_diameterAddr, double *edge_diameterAddr, double *thicknessAddr, double *densityAddr, double *quantityAddr){
	double hole_diameter, edge_diameter, thickness, density, quantity;
	scanf("%lf%lf%lf%lf%lf", hole_diameterAddr, edge_diameterAddr, thicknessAddr, densityAddr, quantityAddr);
}

double calculate(double hole_diameter, double edge_diameter, double thickness, double density, double quantity){
	double weight;
	weight=PI*((edge_diameter*edge_diameter-hole_diameter*hole_diameter)/4)*thickness*density*quantity;
	return weight;
}

void answer(double weight){
	printf("The expected weight of the batch is %.2f grams.\n",weight);
	return;
}
