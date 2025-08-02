// Copyright (c) 2025 Sylar129. All rights reserved

namespace ghostescape {
class Game {
 public:
  Game();
  ~Game();

  void Init();
  void Run();
  void Clean();

  static Game& Get() {
    static Game game;
    return game;
  }

 private:
  void Update();
  void Render();
};

}  // namespace ghostescape
