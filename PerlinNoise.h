#include "random.h"

class PerlinNoise {
  public:
  PerlinNoise();
  void CreateGradientTable();

  private:
  float *G;
};