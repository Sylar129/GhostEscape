// Copyright (c) 2025 Sylar129. All rights reserved

#include "core/game.h"

int main() {
  ghostescape::core::Game* game = new ghostescape::core::Game();

  game->Run();

  delete game;

  return 0;
}
