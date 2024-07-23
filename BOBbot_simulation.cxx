#include <cmath>
#include <iostream>
#include <fstream>
#include <string>

#include <algorithm>
#include <list>
#include <memory>
#include <vector>
#include <random>

int main(int argc, char* argv[])
{
  int NB = 0;
  int NR = 0;
  int n = 0;
    if (argc < 2) {
    n = 10;
  }
  else{
    const int NB = std::stoi(argv[1]);
    const int NR = std::stoi(argv[2]);
  }
  std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0,1); // distribution in range [1, 6]
  double R0=0.50; //radius of the ring
  double RB=0.03; // radius of a BOBbot
  double RR=0.001; // size of a ring particle
  
  double mR0=0.002;
  double mB0=0.10;
  int N=NR+NB;
  double dt=1e-4; double T=60;double  NT=round(T/dt);
  double kRX=100;  // ring-ring steric exclusion spring
  double kRR=100;  // adjacent ring-ring spring
  double kBX=1000;  // bot-bot steric exclusion
  double kRB=1000;  // ring-bot steric exclusion spring
  double ffR=0.3*mR0*9.8; // friction on the ring particles
  double v0=0.01; double eta0=100;
  double FD=v0*eta0;
  double x[N];
  double y[N];
  double xt[N];
  double yt[N];

  double x_new[N];
  double y_new[N];
  double xt_new[N];
  double yt_new[N];
  double  lo = 2*R0*sin(3.14159/NR);
  int T0 = 10;
  double T_run[N];
  double T_count[N];
  double s[N];
  double s_new[N];
  for (int i =0;i<N;i++){
    s[i] = dist(rng)*2*3.1415926;
  }
  for (int i =0;i<N;i++){
    T_run[i] = dist(rng)*T0;
    T_count[i] = 0;
  }
  for (int i = 1;i<NR;i++){
    x[i] = R0*cos(i*2*3.14159/NR);
    y[i] = R0*sin(i*2*3.14159/NR);
  }
  


}