// Copyright (c) 2025 Sylar129. All rights reserved

#include "core/game.h"

int main() {
  ghostescape::Game& game = ghostescape::Game::Get();

  game.Init();
  game.Run();
  game.Clean();

  return 0;
}
