#ifndef FUNCIONS_N
#define FUNCIONS_N

void formT(int n, double *t, double *dt, double tStart, double tEnd);
void formUvh(int n, double *Uvh, double *t, double U, double T);
void formUvyh(int n, double *Uvyh, double *t, double *Uvh, double a, double b, double c);
void formTable(int n, double *t, double *Uvh, double *Uvyh);
void printToFile(double *t, double *Uvh, double *Uvyh, int n);
void pulseTime(double *Uvyh, int n, double dt);
void durPulseEdge(double *Uvyh, int n, double dt);
void timeAt80Uvh(double *t, double *Uvh, int n);
void timeAtMaxUvh(double *t, double *Uvh, int n);
void controlCalc(int n);
void writeInFiles(int n);
void showTitle();
void precisionCalc(double eps);

#endif