#include "PerlinNoise.h"

PerlinNoise::PerlinNoise() {
  G
}

void PerlinNoise::CreateGradientTable() {
  initSeed();
  for (int i = 0; i < 256; i++) {
    *(G + i) = randomDouble(-1, 1);
  }
}